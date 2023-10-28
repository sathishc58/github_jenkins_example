parameters {
        gitParameter name: 'branchName', 
                     type: 'PT_BRANCH',
                     defaultValue: 'master'
    }


pipeline {
    agent any
        stages {
          stage('Git clone and environment setup') {
            steps{
              script {
                echo "Git paramater is ${params.branchName}"
                git branch: "${params.branchName}", credentialsId: '073c22ea-f05b-409d-99a4-5ace933cb7ab', url: 'https://github.com/sathishc58/maven-java.git'
              }
            }
          }
        }
}

/* agent { docker { image 'maven:3.3.3' } }
  ( stage('build') {
                steps { 
                bat 'mvn --version'
            }
        } */
