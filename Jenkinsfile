pipeline {
    agent any
    options {
        skipStagesAfterUnstable()
    }

    stages {
        stage('Docker Build') {
            agent {
                docker {
                    image 'debian'
                }
            }
            steps {
                sh 'apt update -y'
                sh 'apt upgrade -y'
                sh 'apt install build-essential cmake -yq'
            }
        }
    }
}
