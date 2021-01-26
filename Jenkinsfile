pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps { 
                    cd env.WORKSPACE
                "E:\\Java\\jdk1.8.0_231\\bin\\javac.exe" HelloWorld.java
                "E:\\Java\\jdk1.8.0_231\\bin\\java.exe" HelloWorld
            }
        }
    }
}
