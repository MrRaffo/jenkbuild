pipeline {
    agent any

    stages {
        stage('Docker Build') {
            agent {
                docker { image 'debian:latest' }
            }
            steps {
                echo 'hello'
                sh 'RUN apt update -yq'
                echo 'update'
                sh 'RUN apt upgrade -yq'
                echo 'upgrade'
                sh 'RUN apt install cmake build-essential -yq'
                echo 'done'
            }
        }
    }
}
