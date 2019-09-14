
//     #####
//   # ######
//   # ######
//  ## ######
//  ########
const uint8_t eyeDefault[] = {
    0,
    0b00011110,
    0b01011111,
    0b01011111,

    0b11011111,
    0b11111110,
    0, 0
};

//     #####
//   # #####
//  ## #####
//  #######
const uint8_t eyeBlink1[] = {
    0, 0,
    0b00011111,
    0b01011111,

    0b11011111,
    0b11111110,
    0, 0
};

//     #####
//   # #####
//  #######
const uint8_t eyeBlink2[] = {
    0, 0, 0,
    0b00011111,

    0b01011111,
    0b11111110,
    0, 0
};

//     #####
//  ######
const uint8_t eyeBlink3[] = {
    0, 0, 0, 0,
    0b00011111,
    0b11111100,
    0, 0
};

//      ####
//  ####
const uint8_t eyeBlink4[] = {
    0, 0, 0, 0,
    0b00001111,
    0b11110000,
    0, 0
};

//    ######
//   ########
//  ## ######
//  ## ######
//  ## ######
//  ########
//   ####
const uint8_t eyeWide[] = {
    0b00111110,
    0b01111111,
    0b11011111,
    0b11011111,

    0b11011111,
    0b11111110,
    0b01111000,
    0
};


//    # ###
//   ## ####
//  ########
//  ########
//  #######
//   #####
const uint8_t eyeUp[] = {
    0b00101110,
    0b01101111,
    0b11111111,
    0b11111111,

    0b11111110,
    0b01111100,
    0, 0
};

// The right eye, in order for symmettry with eyes, is backwards.
// So the right label has to do the same
// #####  #
// ###### #
// ##  ## #
// ##  ## #
// ###### #
// #####  #
// ## ###
// ##  ## #
const uint8_t eyeRight[] = {
    0b10011111,
    0b10111111,
    0b10110011,
    0b10110011,
    
    0b10111111,
    0b10011111,
    0b00111011,
    0b10110011
};

// ##     #
// ##     #
// ##     #
// ##     #
// ##     #
// ##     #
// ######
// ###### #
const uint8_t eyeLeft[] = {
    0b11000001,
    0b11000001,
    0b11000001,
    0b11000001,

    0b11000001,
    0b11000001,
    0b11111100,
    0b11111101
};
