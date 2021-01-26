pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps { 
                    dir(env.WORKSPACE)
                    script {
                        javac.exe HelloWorld.java
                        java.exe HelloWorld
                   }
               ]
           }
       }
   }
