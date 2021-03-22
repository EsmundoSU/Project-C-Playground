#ifndef LIBS_EXAMPLE1_H
#define LIBS_EXAMPLE1_H

#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

//! @brief Returns an index of new line in the buffer.
//! @param buffer String buffer to be searched.
//! @param bufferSize Length of the string.
//! @return index of new line character or max size of size_t at failure.
//! @see size_t
size_t NewLineIndex(const char *buffer, size_t bufferSize);

#ifdef __cplusplus
};
#endif
#endif // LIBS_EXAMPLE1_H
