// Author: Ignas Laude

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank (link above).
 * It is not meant to be executed as a standalone program.
 */


/* Define the exception here */
class BadLengthException {
private:
    int num;
public:
    BadLengthException(const int& n) : num(n) {}

    // Getter
    const int& what() {
        return num;
    }
};
