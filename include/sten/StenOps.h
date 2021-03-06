// Dialect/Sten/StenOps.h

#ifndef MLIR_DIALECT_STEN_STENOPS_H
#define MLIR_DIALECT_STEN_STENOPS_H

#include "mlir/IR/Function.h"
#include "sten/StenTypes.h"

namespace mlir {
namespace sten {

/// Retrieve the class declarations generated by TableGen
#define GET_OP_CLASSES
#include "sten/StenOps.h.inc"

} // namespace sten
} // namespace mlir

#endif // MLIR_DIALECT_STEN_STENOPS_H
