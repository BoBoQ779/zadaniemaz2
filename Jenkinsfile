pipeline {
    agent any
 
    stages {
        stage('Kompilacja') {
            steps {
                // Używamy 'bat' ponieważ Jenkins jest na Windowsie
                bat 'javac Sort.java' 
            }
        }
        stage('Uruchomienie') {
            steps {
                // Uruchamiamy skompilowany plik klas
                bat 'java Sort'
            }
        }
    }
}
