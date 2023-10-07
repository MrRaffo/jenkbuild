pipeline {
    agent any

    stages {
        stage('Docker Build') {
            agent {
                docker { image 'debian:latest' }
            }
            steps {
                echo 'hello'
                sh 'apt update -yq'
                echo 'update'
                sh 'apt upgrade -yq'
                echo 'upgrade'
                sh 'apt install cmake build-essential -yq'
                echo 'done'
                sh 'cat $(pwd)'
            }
        }
    }
}
