pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps { 
                    
                    script {
                        dir(env.WORKSPACE)
                        bat "javac.exe HelloWorld.java"
                        bat "java.exe HelloWorld"
                   }
                }
           }
       }
   }
