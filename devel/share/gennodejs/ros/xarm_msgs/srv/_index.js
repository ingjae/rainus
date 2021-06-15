
"use strict";

let GetDigitalIO = require('./GetDigitalIO.js')
let ClearErr = require('./ClearErr.js')
let SetInt16 = require('./SetInt16.js')
let GripperState = require('./GripperState.js')
let Move = require('./Move.js')
let TCPOffset = require('./TCPOffset.js')
let GetAnalogIO = require('./GetAnalogIO.js')
let SetLoad = require('./SetLoad.js')
let ConfigToolModbus = require('./ConfigToolModbus.js')
let SetDigitalIO = require('./SetDigitalIO.js')
let GetErr = require('./GetErr.js')
let SetAxis = require('./SetAxis.js')
let GetControllerDigitalIO = require('./GetControllerDigitalIO.js')
let GripperMove = require('./GripperMove.js')
let SetControllerAnalogIO = require('./SetControllerAnalogIO.js')
let GripperConfig = require('./GripperConfig.js')
let SetToolModbus = require('./SetToolModbus.js')
let MoveAxisAngle = require('./MoveAxisAngle.js')

module.exports = {
  GetDigitalIO: GetDigitalIO,
  ClearErr: ClearErr,
  SetInt16: SetInt16,
  GripperState: GripperState,
  Move: Move,
  TCPOffset: TCPOffset,
  GetAnalogIO: GetAnalogIO,
  SetLoad: SetLoad,
  ConfigToolModbus: ConfigToolModbus,
  SetDigitalIO: SetDigitalIO,
  GetErr: GetErr,
  SetAxis: SetAxis,
  GetControllerDigitalIO: GetControllerDigitalIO,
  GripperMove: GripperMove,
  SetControllerAnalogIO: SetControllerAnalogIO,
  GripperConfig: GripperConfig,
  SetToolModbus: SetToolModbus,
  MoveAxisAngle: MoveAxisAngle,
};
