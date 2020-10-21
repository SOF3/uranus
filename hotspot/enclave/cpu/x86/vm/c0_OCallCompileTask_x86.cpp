//
// Created by jianyu on 11/22/18.
//

#include <precompiled.hpp>
#include <enclave/EnclaveABI.h>
#include "c0/c0_OCallCompileTask.hpp"

// TODO: generate more efficient code
void OCallCompileTask::entry() {
    method_entry = EnclaveABI::do_ocall;
}

int OCallCompileTask::compile(int size) {
    // we do not need to compile anything
    entry();
}

void OCallCompileTask::print_disassembly() {
    // not defined
    printf("Undefined");
}