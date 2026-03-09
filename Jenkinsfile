pipeline {
    agent any

    stages {

        stage('Kompilacja') {
            steps {
                sh 'javac Sort.java'
            }
        }

        stage('Uruchomienie') {
            steps {
                sh 'java Sort'
            }
        }

    }
}
