#ifndef _ECHFS_H
#define _ECHFS_H

#include <stdint.h>

/* echfs definitions */
#define ECHFS_ROOT_ID 0xffffffffffffffff
#define BYTES_PER_SECTOR 512
#define BLOCKS_RESERVED 16
#define ECHFS_DELETED_ENTRY 0xfffffffffffffffe

/* According to echfs spec.md :) 
 * Also uint64_t is used because qword = 64 bits
*/
typedef echfs_block_0 {
     char asm_instruction[4];
     char fs_signature[9];
     uint64_t echfs_block_count;
     uint64_t length_main_directory;
} __attribute__ ((packed));

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

typedef struct echfs_result_t {
     uint64_t echfs_target_entry;
     char file_name[201];
     int file_not_found;
     int failed;
} __attribute__((packed));

void echfs_init();
void file_read(const char *file_path);

/* buf is declared as char so that's why uint8_t is used */
void block_read(uint32_t id, uint8_t buf);

#endif //_ECHFS_H
