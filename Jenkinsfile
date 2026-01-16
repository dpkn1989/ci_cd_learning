pipeline {
  agent any

  options {
    timestamps()
    disableConcurrentBuilds()
  }

  environment {
    BUILD_DIR = "build"
  }

  stages {
    stage('Checkout') {
      steps {
        checkout scm
      }
    }

    stage('Configure') {
      steps {
        sh '''
          rm -rf "$BUILD_DIR"
          cmake -S . -B "$BUILD_DIR" -G Ninja -DCMAKE_BUILD_TYPE=Release
        '''
      }
    }

    stage('Build') {
      steps {
        sh '''
          cmake --build "$BUILD_DIR" --config Release
        '''
      }
    }
  }

  post {
    always {
      archiveArtifacts artifacts: 'build/**', onlyIfSuccessful: false, allowEmptyArchive: true
    }
  }
}
