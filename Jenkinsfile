pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps { 
                    
                    // script {
                        //dir(env.WORKSPACE)
                        bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe -version'
                        bat 'E:\\Java\\jdk1.8.0_231\\bin\\javac.exe HelloWorld.java'
                        // bat 'env.WORKSPACE\\javac.exe HelloWorld.java'
                        bat 'E:\\Java\\jdk1.8.0_231\\bin\\java HelloWorld'
                   // }
               }
           }
       }
   }
