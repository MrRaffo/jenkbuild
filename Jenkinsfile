pipeline {
    agent none

    stages {
        stage('Pre-Build')
        {
            steps {
                sh 'docker build -t jenkapp'
            }
        }
        stage('Docker Build') {
            agent jenkapp             
            steps {
                sh 'cat $(pwd)'
            }
        }
    }
}
