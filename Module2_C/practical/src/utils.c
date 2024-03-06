// Copyright 2024 The MITRE Corporation. ALL RIGHTS RESERVED

// Approved for public release. Distribution unlimited 23-02181-18.

#include "utils.h"

/*
 * This is the UTILS c module. At the top we include the UTILS header file, which you should go check out now.
 *
 * Ok, so you saw the function signatures in that file, in this file we actually define our functions. These functions
 * are all utilities that our main function will use.
 */

/* DEFINE FOR STEP 1 */
void getUserInput(char* buffer) {
    // Use printf to prompt the user to enter a string
    printf("Enter A String: ");

    // Use fgets to read input from stdin (check out https://www.w3schools.com/c/c_user_input.php)
    fgets(buffer, 256, stdin);

    // fgets will read the entire line of text from the console after the user hits 'enter'. This includes
    // a hidden character called a newline. We don't want to include this character in our final packet,
    // so you will have to 'strip' it from the string. Remember how strings are represented in C, and try
    // to shorten the string to exclude the newline character.
    // (hint: use a loop to inspect each character in the buffer and change the newline to a null terminator)

    for ( int i = 0; i < 256; i++ ) {
        if (buffer[i] == "\n") {
            buffer[i] = "\0";
        }
    }
}

/* DEFINE FOR STEP 2 */
void parseInput(char* buffer, pkt_t* pkt) {

    // Determine the length of the data in the buffer (check out https://man7.org/linux/man-pages/man3/strlen.3.html)
    // <code here>

    // Set the pkt data pointer at your input buffer
    // <code here>

    // Calculate checksum byte for the data.
    // The checksum is a byte stored in the pkt header.
    // When you perform an xor operation on the checksum byte
    // and all of the data bytes, your result should be zero.
    // Example:
    // Data bytes:    1 1 0 0  1 0 1 0
    //                0 0 1 0  0 0 1 1
    //                1 0 1 1  1 1 1 1
    //                0 1 1 0  1 0 1 1
    //       xor      1 1 0 0  1 0 0 0
    //  ------------------------------
    //   = checksum   1 1 1 1  0 1 0 1
    //
    //  data bytes xor checksum = 0 0 0 0  0 0 0 0
    //
    // (hint: you should use a loop here)
    // <code here>

    // Set the length of the pkt header
    // (hint: check out the pkt_t struct definition)
    // <code here>
}

/* DEFINE FOR STEP 4 */
void printPacket(uint8_t* buffer, uint16_t bufSize) {

    // The format of the output string should be as follows:
    // Bytes should be in uppercase hex format (0x00 - 0xFF) with a space between them.
    // For example, the string "abc" would be represented as "0x61 0x62 0x63"
    // Use the printf function (https://man7.org/linux/man-pages/man3/printf.3.html)
    // to format your buffer in this way. You may have to do some research on "C format specifiers"
    // to properly print your hex values.
    // (hint: you may need to loop through each byte in the array and print them individually)
    // <code here>

    // Print a final "\n" newline character to avoid issues with the console.
    // <code here>
}


