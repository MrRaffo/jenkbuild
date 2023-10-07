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
                sh 'cat $(pwd)''
            }
        }
        stage('Docker Build') {
            steps {
                sh 'cat $(pwd)'
            }
        }
    }
}
