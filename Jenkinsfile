pipeline {
    agent any

    stages {
        stage('Docker Build') {
            agent {
                docker { image 'debian:latest' }
            }
            steps {
                echo 'hello'
            }
        }
    }
}
