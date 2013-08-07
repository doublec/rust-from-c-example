#[crate_type = "lib"];
#[no_std];
#[allow(ctypes)];

#[no_mangle]
pub extern fn add(lhs: uint, rhs: uint) -> uint {
  lhs + rhs
}
