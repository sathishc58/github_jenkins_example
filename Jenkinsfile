pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps { 
                    dir(env.WORKSPACE)
                    script {
                        bat "javac.exe HelloWorld.java"
                        bat "java.exe HelloWorld"
                   }
                }
           }
       }
   }
