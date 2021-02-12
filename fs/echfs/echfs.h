#ifndef _ECHFS_H
#define _ECHFS_H

#include <stdint.h>

/* echfs definitions */
#define BYTES_PER_SECTOR 512


typedef struct echfs_entry_t {
     uint64_t echfs_parent_id;
     uint8_t type;
     char file_name[201];
     uint64_t time_access;
     uint64_t time_modified;
     uint64_t time_create;
     uint32_t permissions;
     uint32_t file_owner;
     uint64_t file_payload;
     uint64_t file_size;
} __attribute__((packed));

typedef struct echfs_result {
     char file_name[201];
     int file_not_found;
} __attribute__((packed));


#endif //_ECHFS_H
