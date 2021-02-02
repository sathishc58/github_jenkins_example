pipeline {
    agent any
        stages {
            stage('compileandrun') {
                steps {
                    parallel (
                        hw: {
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe -version'
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe HelloWorld.java'
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\java HelloWorld'
                            script {
                                sh "chmod +x -R ${env.WORKSPACE}/../${env.JOB_NAME}@script"
                                sh "${env.WORKSPACE}/../${env.JOB_NAME}@script/hello.sh"
                               
                            }
                        },
                        hw1: { 
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe -version'
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe HelloWorld1.java'
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\java HelloWorld1'
                        }
                    )
                }
           }
       }
   }

