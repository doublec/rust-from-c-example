/* 
  Shims for zero runtme rust from:
  https://github.com/neykov/armboot
*/
typedef void (*stack_switch_shim)(void*);

void
upcall_call_shim_on_c_stack(void *args, void *fn_ptr) {
    // There's no task. Call the function and hope for the best
    stack_switch_shim f = (stack_switch_shim)fn_ptr;
    f(args);
}

/*
 * The opposite of above. Starts on a C stack and switches to the Rust
 * stack. This is the only upcall that runs from the C stack.
 */
void
upcall_call_shim_on_rust_stack(void *args, void *fn_ptr) {
    // There's no task. Call the function and hope for the best
    stack_switch_shim f = (stack_switch_shim)fn_ptr;
    f(args);
}

