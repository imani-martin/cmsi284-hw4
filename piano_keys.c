#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

    char keys[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
    double numberOfKeys =  88;
    double initialFrequency = 27.5;

    for (int i = 0; i < numberOfKeys; i++) {
        float frequency = initialFrequency * powf(2.0, ((float)i / (float)12));
        printf("%s\t%.04f\n", keys[i % 12], frequency);
    }
    return 0;
}
