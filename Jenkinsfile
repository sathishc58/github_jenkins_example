pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps {
                    parallel (
                        hw: {
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe -version'
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe HelloWorld.java'
                            bat 'E:\\Java\\jdk1.8.0_231\\bin\\java HelloWorld'
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

