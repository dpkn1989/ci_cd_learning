pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Configure') {
            steps {
                sh 'cmake -S . -B build'
            }
        }

        stage('Build') {
            steps {
                sh 'cmake --build build'
            }
        }

        stage('Test') {
            steps {
                sh 'ctest --test-dir build --output-on-failure'
            }
        }
    }
}
