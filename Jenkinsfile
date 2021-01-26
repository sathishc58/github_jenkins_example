pipeline {
    agent any
        stages {
            stage('buildandrun') {
                steps { 
                    dir(env.WORKSPACE)
                    javac.exe HelloWorld.java
                    java.exe HelloWorld
            }
        }
    }
}
