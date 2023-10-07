pipeline {
    agent { 
        docker { image 'debian' }
    }

    stages {
        stage('Docker Build') {
            steps {
                sh 'apt update -y'
                sh 'apt upgrade -y'
                sh 'apt install build-essential cmake -yq'
            }
        }
    }
}
