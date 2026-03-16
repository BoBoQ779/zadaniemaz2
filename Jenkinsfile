pipeline {
    agent any

    stages {

        stage('Prepare') {
            steps {
                sh 'mkdir -p reports'
            }
        }

        stage('Build with GCC warnings') {
            steps {
                sh 'gcc -Wall -Wextra -Wpedantic src/main.c -o program'
            }
        }

        stage('Cppcheck analysis') {
            steps {
                sh 'cppcheck --enable=all src 2> reports/cppcheck.txt || true'
            }
        }

        stage('Cppcheck MISRA') {
            steps {
                sh 'cppcheck --enable=misra src 2> reports/misra.txt || true'
            }
        }

        stage('Clang analysis') {
            steps {
                sh 'clang-tidy src/main.c -- || true'
            }
        }

        stage('Splint analysis') {
            steps {
                sh 'splint src/main.c || true'
            }
        }

    }
}
