# [42] ft_printf

The first step of the algorithms branch in the 42 Cadet curriculum. recreating printf is all about taking the time to structure the implementation before actually coding. The cadets who struggled with printf did not plan their project before coding. Printf itself is not hard, and the project can be seen as "making a structure to call various functions that have already been written". Unlike other projects, error handling requirements for this project was kept to a minimum.

### Possible Optimization

Adding proper error handling would be a huge boon to this project. Space in the code structure for error handling has been included. To get a higher final score, I would need to add more optional/custom flags, as well as update this project to the new rubric. In terms of speed, writing to a buffer, and then outputting the entire buffer on success with a single write call would be much faster than writing out each character. A different algorithm could be used for handling each type, in order to reduce the amount of times memory is being allocated temporarily.

## Final Score

103/100

## Usage

To include in libft.

## Norme

This project is coded in accordance with the school's norms. A full copy of the norm can be found [here](https://github.com/MagicHatJo/-42-Norm/blob/master/norme.en.pdf).
