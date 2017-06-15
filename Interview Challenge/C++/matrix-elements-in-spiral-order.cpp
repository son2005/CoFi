// https://codefights.com/interview/dx3iqAeokok6KoLHb
std::vector<int> matrixElementsInSpiralOrder(std::vector<std::vector<int>> matrix) {
    std::vector<int> results;

    if(matrix.empty()) return results;
    if(matrix[0].size() == 1) {
        for(int i = 0; i < matrix[0].size(); i++) {
                results.push_back(matrix[0][i]);
        }
        return results;
    }

    std::vector<std::vector<int>> matrixTemp;
    for(int i = 0; i < matrix.size(); i++){
        matrixTemp.push_back(std::vector<int>());
        for(int j = 0; j < matrix[i].size(); j++) {
            matrixTemp[i].push_back(1);
        }
    }

    int totalSize = matrix.size() * matrix[0].size();
    int sizeI = matrix.size();
    int sizeJ = matrix[0].size();
    int i = 0; int j = 0;
    int dir = 0; // 0: right, 1: down, 2: left, 3: up
    while(results.size() < totalSize) {
        if(dir == 0) {
            while(j < sizeJ && matrixTemp[i][j]) {
                matrixTemp[i][j] = 0;
                results.push_back(matrix[i][j]);
                ++j;
                if(j == sizeJ || !matrixTemp[i][j]) {
                    j--;
                    i++;
                    break;
                }

            }
        }
        else if(dir == 1) {
            while(i < sizeI && matrixTemp[i][j]) {
                matrixTemp[i][j] = 0;
                results.push_back(matrix[i][j]);
                ++i;
                if(i == sizeI || !matrixTemp[i][j]) {
                    i--;
                    j--;
                    break;
                }
            }
        }
        else if(dir == 2) {
            while(j >= 0 && matrixTemp[i][j]) {
                matrixTemp[i][j] = 0;
                results.push_back(matrix[i][j]);
                --j;
                if(j < 0 || !matrixTemp[i][j]) {
                    j++;
                    i--;
                    break;
                }
            }
        }
        else if(dir == 3) {
            while(i >= 0 && matrixTemp[i][j]) {
                matrixTemp[i][j] = 0;
                results.push_back(matrix[i][j]);
                --i;
                if(i < 0 || !matrixTemp[i][j]) {
                    i++;
                    j++;
                    break;
                }
            }
        }
        if(++dir == 4) dir = 0;
    }

    return results;
}
