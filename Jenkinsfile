pipeline {
    agent none

    stages {
        stage('Pre-Build')
        {
            agent { dockerfile }
            steps {
                sh 'docker build -t jenkapp'
            }
        }
        stage('Docker Build') {
            steps {
                sh 'cat $(pwd)'
            }
        }
    }
}
