pipeline {
    agent any

    stages {

        stage('Build with GCC warnings') {
            steps {
                sh 'gcc -Wall -Wextra -Wpedantic src/main.c -o program'
            }
        }

        stage('Cppcheck analysis') {
            steps {
                sh 'cppcheck --enable=all src 2> reports/cppcheck.txt'
            }
        }

        stage('Cppcheck MISRA') {
            steps {
                sh 'cppcheck --enable=misra src 2> reports/misra.txt'
            }
        }

        stage('Clang analysis') {
            steps {
                sh 'clang-tidy src/main.c --'
            }
        }

        stage('Splint analysis') {
            steps {
                sh 'splint src/main.c'
            }
        }

    }
}
