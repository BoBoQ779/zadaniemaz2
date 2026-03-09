pipeline {
    agent any

    stages {

        stage('Kompilacja') {
            steps {
                sh 'gcc sort.c -o sort'
            }
        }

        stage('Uruchomienie') {
            steps {
                sh './sort'
            }
        }

    }
}
