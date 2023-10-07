pipeline {
    agent {
        dockerfile {
            filename 'Dockerfile'
        }
    }

    stages {
        stage('Pre-Build')
        {
            steps {
                sh 'pwd'
            }
        }
        stage('Docker Build') {
            steps {
                sh 'ls -l $(pwd)'
            }
        }
    }
}
