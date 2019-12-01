// Copyright 2019 SoloKeys Developers
//
// Licensed under the Apache License, Version 2.0, <LICENSE-APACHE or
// http://apache.org/licenses/LICENSE-2.0> or the MIT license <LICENSE-MIT or
// http://opensource.org/licenses/MIT>, at your option. This file may not be
// copied, modified, or distributed except according to those terms.
#include <stdint.h>
#include "crypto.h"
#include "memory_layout.h"


const uint8_t attestation_solo_cert_der[] =
"\x30\x82\x03\x03\x30\x82\x02\xaa\xa0\x03\x02\x01\x02\x02\x01\x01\x30\x0a\x06\x08"
"\x2a\x86\x48\xce\x3d\x04\x03\x02\x30\x81\x80\x31\x0b\x30\x09\x06\x03\x55\x04\x06"
"\x13\x02\x55\x53\x31\x11\x30\x0f\x06\x03\x55\x04\x08\x0c\x08\x4d\x61\x72\x79\x6c"
"\x61\x6e\x64\x31\x12\x30\x10\x06\x03\x55\x04\x0a\x0c\x09\x53\x6f\x6c\x6f\x20\x4b"
"\x65\x79\x73\x31\x10\x30\x0e\x06\x03\x55\x04\x0b\x0c\x07\x52\x6f\x6f\x74\x20\x43"
"\x41\x31\x15\x30\x13\x06\x03\x55\x04\x03\x0c\x0c\x73\x6f\x6c\x6f\x6b\x65\x79\x73"
"\x2e\x63\x6f\x6d\x31\x21\x30\x1f\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x09\x01\x16"
"\x12\x68\x65\x6c\x6c\x6f\x40\x73\x6f\x6c\x6f\x6b\x65\x79\x73\x2e\x63\x6f\x6d\x30"
"\x20\x17\x0d\x31\x39\x31\x32\x30\x31\x31\x39\x32\x33\x34\x39\x5a\x18\x0f\x32\x30"
"\x36\x39\x31\x31\x31\x38\x31\x39\x32\x33\x34\x39\x5a\x30\x81\x91\x31\x0b\x30\x09"
"\x06\x03\x55\x04\x06\x13\x02\x55\x53\x31\x11\x30\x0f\x06\x03\x55\x04\x08\x0c\x08"
"\x4d\x61\x72\x79\x6c\x61\x6e\x64\x31\x11\x30\x0f\x06\x03\x55\x04\x0a\x0c\x08\x53"
"\x6f\x6c\x6f\x4b\x65\x79\x73\x31\x22\x30\x20\x06\x03\x55\x04\x0b\x0c\x19\x41\x75"
"\x74\x68\x65\x6e\x74\x69\x63\x61\x74\x6f\x72\x20\x41\x74\x74\x65\x73\x74\x61\x74"
"\x69\x6f\x6e\x31\x15\x30\x13\x06\x03\x55\x04\x03\x0c\x0c\x73\x6f\x6c\x6f\x6b\x65"
"\x79\x73\x2e\x63\x6f\x6d\x31\x21\x30\x1f\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x09"
"\x01\x16\x12\x68\x65\x6c\x6c\x6f\x40\x73\x6f\x6c\x6f\x6b\x65\x79\x73\x2e\x63\x6f"
"\x6d\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86\x48\xce"
"\x3d\x03\x01\x07\x03\x42\x00\x04\x22\xfe\x0f\xb5\x2a\x78\xbe\xc6\x45\x37\x1a\x28"
"\xa7\x57\x43\x49\xa4\x6f\x85\x4d\xca\x4e\x25\x1c\x9f\x75\x30\x3d\xbf\x10\xd5\xd2"
"\xd2\x0b\xb9\x69\x2c\xdd\xb2\x5c\x14\xd8\x39\x85\x12\xf6\x23\xee\x91\xba\xc6\xac"
"\xff\x4a\x1a\x27\xef\xe0\xc1\x54\x3f\xd4\xd9\xc5\xa3\x81\xff\x30\x81\xfc\x30\x1d"
"\x06\x03\x55\x1d\x0e\x04\x16\x04\x14\x3b\xe6\xd2\xc0\x6f\xf2\xe7\xb0\x7c\x9d\x9e"
"\x28\xc0\x20\xb0\x0d\x07\xc8\x15\xc8\x30\x81\x9f\x06\x03\x55\x1d\x23\x04\x81\x97"
"\x30\x81\x94\xa1\x81\x86\xa4\x81\x83\x30\x81\x80\x31\x0b\x30\x09\x06\x03\x55\x04"
"\x06\x13\x02\x55\x53\x31\x11\x30\x0f\x06\x03\x55\x04\x08\x0c\x08\x4d\x61\x72\x79"
"\x6c\x61\x6e\x64\x31\x12\x30\x10\x06\x03\x55\x04\x0a\x0c\x09\x53\x6f\x6c\x6f\x20"
"\x4b\x65\x79\x73\x31\x10\x30\x0e\x06\x03\x55\x04\x0b\x0c\x07\x52\x6f\x6f\x74\x20"
"\x43\x41\x31\x15\x30\x13\x06\x03\x55\x04\x03\x0c\x0c\x73\x6f\x6c\x6f\x6b\x65\x79"
"\x73\x2e\x63\x6f\x6d\x31\x21\x30\x1f\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x09\x01"
"\x16\x12\x68\x65\x6c\x6c\x6f\x40\x73\x6f\x6c\x6f\x6b\x65\x79\x73\x2e\x63\x6f\x6d"
"\x82\x09\x00\xc4\x47\x63\x92\x8f\xf4\xbe\x8c\x30\x09\x06\x03\x55\x1d\x13\x04\x02"
"\x30\x00\x30\x0b\x06\x03\x55\x1d\x0f\x04\x04\x03\x02\x04\xf0\x30\x21\x06\x0b\x2b"
"\x06\x01\x04\x01\x82\xe5\x1c\x01\x01\x04\x04\x12\x04\x10\x88\x76\x63\x1b\xd4\xa0"
"\x42\x7f\x57\x73\x0e\xc7\x1c\x9e\x02\x79\x30\x0a\x06\x08\x2a\x86\x48\xce\x3d\x04"
"\x03\x02\x03\x47\x00\x30\x44\x02\x20\x4d\xea\x09\x15\x6c\x86\x48\x57\x2a\xa8\x8d"
"\x87\xc3\xfa\xb6\x6b\x29\x9b\xfb\x8b\x4d\x4d\x29\x77\x5b\xa1\x04\x4c\x7f\x12\x8d"
"\x71\x02\x20\x47\x4c\x3d\xb2\xa1\x74\xe3\x9c\xfe\xe1\x23\xbf\xec\x47\x96\xf4\xe5"
"\x9b\x65\x76\xac\xc8\x69\x1d\xe2\x74\xff\x4e\xa4\xcf\x02\x6d"
;

const uint8_t attestation_hacker_cert_der[] =
"\x30\x82\x02\xe9\x30\x82\x02\x8e\xa0\x03\x02\x01\x02\x02\x01\x01\x30\x0a\x06\x08"
"\x2a\x86\x48\xce\x3d\x04\x03\x02\x30\x81\x82\x31\x0b\x30\x09\x06\x03\x55\x04\x06"
"\x13\x02\x55\x53\x31\x11\x30\x0f\x06\x03\x55\x04\x08\x0c\x08\x4d\x61\x72\x79\x6c"
"\x61\x6e\x64\x31\x14\x30\x12\x06\x03\x55\x04\x0a\x0c\x0b\x53\x4f\x4c\x4f\x20\x48"
"\x41\x43\x4b\x45\x52\x31\x10\x30\x0e\x06\x03\x55\x04\x0b\x0c\x07\x52\x6f\x6f\x74"
"\x20\x43\x41\x31\x15\x30\x13\x06\x03\x55\x04\x03\x0c\x0c\x73\x6f\x6c\x6f\x6b\x65"
"\x79\x73\x2e\x63\x6f\x6d\x31\x21\x30\x1f\x06\x09\x2a\x86\x48\x86\xf7\x0d\x01\x09"
"\x01\x16\x12\x68\x65\x6c\x6c\x6f\x40\x73\x6f\x6c\x6f\x6b\x65\x79\x73\x2e\x63\x6f"
"\x6d\x30\x20\x17\x0d\x31\x38\x31\x32\x31\x31\x30\x32\x32\x30\x31\x32\x5a\x18\x0f"
"\x32\x30\x36\x38\x31\x31\x32\x38\x30\x32\x32\x30\x31\x32\x5a\x30\x81\x94\x31\x0b"
"\x30\x09\x06\x03\x55\x04\x06\x13\x02\x55\x53\x31\x11\x30\x0f\x06\x03\x55\x04\x08"
"\x0c\x08\x4d\x61\x72\x79\x6c\x61\x6e\x64\x31\x14\x30\x12\x06\x03\x55\x04\x0a\x0c"
"\x0b\x53\x4f\x4c\x4f\x20\x48\x41\x43\x4b\x45\x52\x31\x22\x30\x20\x06\x03\x55\x04"
"\x0b\x0c\x19\x41\x75\x74\x68\x65\x6e\x74\x69\x63\x61\x74\x6f\x72\x20\x41\x74\x74"
"\x65\x73\x74\x61\x74\x69\x6f\x6e\x31\x15\x30\x13\x06\x03\x55\x04\x03\x0c\x0c\x73"
"\x6f\x6c\x6f\x6b\x65\x79\x73\x2e\x63\x6f\x6d\x31\x21\x30\x1f\x06\x09\x2a\x86\x48"
"\x86\xf7\x0d\x01\x09\x01\x16\x12\x68\x65\x6c\x6c\x6f\x40\x73\x6f\x6c\x6f\x6b\x65"
"\x79\x73\x2e\x63\x6f\x6d\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06"
"\x08\x2a\x86\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x7d\x78\xf6\xbe\xca\x40\x76"
"\x3b\xc7\x5c\xe3\xac\xf4\x27\x12\xc3\x94\x98\x13\x37\xa6\x41\x0e\x92\xf6\x9a\x3b"
"\x15\x47\x8d\xb6\xce\xd9\xd3\x4f\x39\x13\xed\x12\x7b\x81\x14\x3b\xe8\xf9\x4c\x96"
"\x38\xfe\xe3\xd6\xcb\x1b\x53\x93\xa2\x74\xf7\x13\x9a\x0f\x9d\x5e\xa6\xa3\x81\xde"
"\x30\x81\xdb\x30\x1d\x06\x03\x55\x1d\x0e\x04\x16\x04\x14\x9a\xfb\xa2\x21\x09\x23"
"\xb5\xe4\x7a\x2a\x1d\x7a\x6c\x4e\x03\x89\x92\xa3\x0e\xc2\x30\x81\xa1\x06\x03\x55"
"\x1d\x23\x04\x81\x99\x30\x81\x96\xa1\x81\x88\xa4\x81\x85\x30\x81\x82\x31\x0b\x30"
"\x09\x06\x03\x55\x04\x06\x13\x02\x55\x53\x31\x11\x30\x0f\x06\x03\x55\x04\x08\x0c"
"\x08\x4d\x61\x72\x79\x6c\x61\x6e\x64\x31\x14\x30\x12\x06\x03\x55\x04\x0a\x0c\x0b"
"\x53\x4f\x4c\x4f\x20\x48\x41\x43\x4b\x45\x52\x31\x10\x30\x0e\x06\x03\x55\x04\x0b"
"\x0c\x07\x52\x6f\x6f\x74\x20\x43\x41\x31\x15\x30\x13\x06\x03\x55\x04\x03\x0c\x0c"
"\x73\x6f\x6c\x6f\x6b\x65\x79\x73\x2e\x63\x6f\x6d\x31\x21\x30\x1f\x06\x09\x2a\x86"
"\x48\x86\xf7\x0d\x01\x09\x01\x16\x12\x68\x65\x6c\x6c\x6f\x40\x73\x6f\x6c\x6f\x6b"
"\x65\x79\x73\x2e\x63\x6f\x6d\x82\x09\x00\xeb\xd4\x84\x50\x14\xab\xd1\x57\x30\x09"
"\x06\x03\x55\x1d\x13\x04\x02\x30\x00\x30\x0b\x06\x03\x55\x1d\x0f\x04\x04\x03\x02"
"\x04\xf0\x30\x0a\x06\x08\x2a\x86\x48\xce\x3d\x04\x03\x02\x03\x49\x00\x30\x46\x02"
"\x21\x00\xa1\x7b\x2a\x1d\x4e\x42\xa8\x68\x6d\x65\x61\x1e\xf5\xfe\x6d\xc6\x99\xae"
"\x7c\x20\x83\x16\xba\xd6\xe5\x0f\xd7\x0d\x7e\x05\xda\xc9\x02\x21\x00\x92\x49\xf3"
"\x0b\x57\xd1\x19\x72\xf2\x75\x5a\xa2\xe0\xb6\xbd\x0f\x07\x38\xd0\xe5\xa2\x4f\xa0"
"\xf3\x87\x61\x82\xd8\xcd\x48\xfc\x57"
;


const uint16_t attestation_solo_cert_der_size = sizeof(attestation_solo_cert_der)-1;
const uint16_t attestation_hacker_cert_der_size = sizeof(attestation_hacker_cert_der)-1;

const uint8_t * attestation_cert_der = ((flash_attestation_page *)ATTESTATION_PAGE_ADDR)->attestation_cert;

uint8_t * device_get_attestation_key(){
    flash_attestation_page * page =(flash_attestation_page *)ATTESTATION_PAGE_ADDR;
    return page->attestation_key;
}

uint16_t device_attestation_cert_der_get_size(){
    uint16_t sz = (uint16_t)((flash_attestation_page *)ATTESTATION_PAGE_ADDR)->attestation_cert_size;
    return sz;
}
