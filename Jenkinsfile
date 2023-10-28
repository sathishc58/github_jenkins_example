parameters {
        gitParameter name: 'branchName', 
                     type: 'PT_BRANCH',
                     defaultValue: 'master'
    }


pipeline {
    agent { docker { image 'maven:3.3.3' } }
        stages {
          stage('Git clone and environment setup') {
            steps{
              script {
                echo "Git paramater is ${params.branchName}"
                git branch: "${params.branchName}", credentialsId: 'xxx', url: 'https://git.xxxx.git'
              }
            }
          }
        }
}

/* ( stage('build') {
                steps { 
                bat 'mvn --version'
            }
        } */
