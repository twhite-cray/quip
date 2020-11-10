#pragma once
#include <cublas_v2.h>
#define HIPBLAS_COMPUTE_16F CUBLAS_COMPUTE_16F
#define HIPBLAS_COMPUTE_16F_PEDANTIC CUBLAS_COMPUTE_16F_PEDANTIC
#define HIPBLAS_COMPUTE_32F CUBLAS_COMPUTE_32F
#define HIPBLAS_COMPUTE_32F_FAST_16BF CUBLAS_COMPUTE_32F_FAST_16BF
#define HIPBLAS_COMPUTE_32F_FAST_16F CUBLAS_COMPUTE_32F_FAST_16F
#define HIPBLAS_COMPUTE_32F_FAST_TF32 CUBLAS_COMPUTE_32F_FAST_TF32
#define HIPBLAS_COMPUTE_32F_PEDANTIC CUBLAS_COMPUTE_32F_PEDANTIC
#define HIPBLAS_COMPUTE_32I CUBLAS_COMPUTE_32I
#define HIPBLAS_COMPUTE_32I_PEDANTIC CUBLAS_COMPUTE_32I_PEDANTIC
#define HIPBLAS_COMPUTE_64F CUBLAS_COMPUTE_64F
#define HIPBLAS_COMPUTE_64F_PEDANTIC CUBLAS_COMPUTE_64F_PEDANTIC
#define HIPBLAS_C_16F CUDA_C_16F
#define HIPBLAS_C_32F CUDA_C_32F
#define HIPBLAS_C_32I CUDA_C_32I
#define HIPBLAS_C_32U CUDA_C_32U
#define HIPBLAS_C_64F CUDA_C_64F
#define HIPBLAS_C_8I CUDA_C_8I
#define HIPBLAS_C_8U CUDA_C_8U
#define HIPBLAS_DEFAULT_MATH CUBLAS_DEFAULT_MATH
#define HIPBLAS_DIAG_NON_UNIT CUBLAS_DIAG_NON_UNIT
#define HIPBLAS_DIAG_UNIT CUBLAS_DIAG_UNIT
#define HIPBLAS_FILL_MODE_FULL CUBLAS_FILL_MODE_FULL
#define HIPBLAS_FILL_MODE_LOWER CUBLAS_FILL_MODE_LOWER
#define HIPBLAS_FILL_MODE_UPPER CUBLAS_FILL_MODE_UPPER
#define HIPBLAS_GEMM_ALGO0 CUBLAS_GEMM_ALGO0
#define HIPBLAS_GEMM_ALGO0_TENSOR_OP CUBLAS_GEMM_ALGO0_TENSOR_OP
#define HIPBLAS_GEMM_ALGO1 CUBLAS_GEMM_ALGO1
#define HIPBLAS_GEMM_ALGO10 CUBLAS_GEMM_ALGO10
#define HIPBLAS_GEMM_ALGO10_TENSOR_OP CUBLAS_GEMM_ALGO10_TENSOR_OP
#define HIPBLAS_GEMM_ALGO11 CUBLAS_GEMM_ALGO11
#define HIPBLAS_GEMM_ALGO11_TENSOR_OP CUBLAS_GEMM_ALGO11_TENSOR_OP
#define HIPBLAS_GEMM_ALGO12 CUBLAS_GEMM_ALGO12
#define HIPBLAS_GEMM_ALGO12_TENSOR_OP CUBLAS_GEMM_ALGO12_TENSOR_OP
#define HIPBLAS_GEMM_ALGO13 CUBLAS_GEMM_ALGO13
#define HIPBLAS_GEMM_ALGO13_TENSOR_OP CUBLAS_GEMM_ALGO13_TENSOR_OP
#define HIPBLAS_GEMM_ALGO14 CUBLAS_GEMM_ALGO14
#define HIPBLAS_GEMM_ALGO14_TENSOR_OP CUBLAS_GEMM_ALGO14_TENSOR_OP
#define HIPBLAS_GEMM_ALGO15 CUBLAS_GEMM_ALGO15
#define HIPBLAS_GEMM_ALGO15_TENSOR_OP CUBLAS_GEMM_ALGO15_TENSOR_OP
#define HIPBLAS_GEMM_ALGO16 CUBLAS_GEMM_ALGO16
#define HIPBLAS_GEMM_ALGO17 CUBLAS_GEMM_ALGO17
#define HIPBLAS_GEMM_ALGO18 CUBLAS_GEMM_ALGO18
#define HIPBLAS_GEMM_ALGO19 CUBLAS_GEMM_ALGO19
#define HIPBLAS_GEMM_ALGO1_TENSOR_OP CUBLAS_GEMM_ALGO1_TENSOR_OP
#define HIPBLAS_GEMM_ALGO2 CUBLAS_GEMM_ALGO2
#define HIPBLAS_GEMM_ALGO20 CUBLAS_GEMM_ALGO20
#define HIPBLAS_GEMM_ALGO21 CUBLAS_GEMM_ALGO21
#define HIPBLAS_GEMM_ALGO22 CUBLAS_GEMM_ALGO22
#define HIPBLAS_GEMM_ALGO23 CUBLAS_GEMM_ALGO23
#define HIPBLAS_GEMM_ALGO2_TENSOR_OP CUBLAS_GEMM_ALGO2_TENSOR_OP
#define HIPBLAS_GEMM_ALGO3 CUBLAS_GEMM_ALGO3
#define HIPBLAS_GEMM_ALGO3_TENSOR_OP CUBLAS_GEMM_ALGO3_TENSOR_OP
#define HIPBLAS_GEMM_ALGO4 CUBLAS_GEMM_ALGO4
#define HIPBLAS_GEMM_ALGO4_TENSOR_OP CUBLAS_GEMM_ALGO4_TENSOR_OP
#define HIPBLAS_GEMM_ALGO5 CUBLAS_GEMM_ALGO5
#define HIPBLAS_GEMM_ALGO5_TENSOR_OP CUBLAS_GEMM_ALGO5_TENSOR_OP
#define HIPBLAS_GEMM_ALGO6 CUBLAS_GEMM_ALGO6
#define HIPBLAS_GEMM_ALGO6_TENSOR_OP CUBLAS_GEMM_ALGO6_TENSOR_OP
#define HIPBLAS_GEMM_ALGO7 CUBLAS_GEMM_ALGO7
#define HIPBLAS_GEMM_ALGO7_TENSOR_OP CUBLAS_GEMM_ALGO7_TENSOR_OP
#define HIPBLAS_GEMM_ALGO8 CUBLAS_GEMM_ALGO8
#define HIPBLAS_GEMM_ALGO8_TENSOR_OP CUBLAS_GEMM_ALGO8_TENSOR_OP
#define HIPBLAS_GEMM_ALGO9 CUBLAS_GEMM_ALGO9
#define HIPBLAS_GEMM_ALGO9_TENSOR_OP CUBLAS_GEMM_ALGO9_TENSOR_OP
#define HIPBLAS_GEMM_DEFAULT CUBLAS_GEMM_DEFAULT
#define HIPBLAS_GEMM_DEFAULT_TENSOR_OP CUBLAS_GEMM_DEFAULT_TENSOR_OP
#define HIPBLAS_GEMM_DFALT_TENSOR_OP CUBLAS_GEMM_DFALT_TENSOR_OP
#define HIPBLAS_MATH_DISALLOW_REDUCED_PRECISION_REDUCTION CUBLAS_MATH_DISALLOW_REDUCED_PRECISION_REDUCTION
#define HIPBLAS_OP_C CUBLAS_OP_C
#define HIPBLAS_OP_CONJG CUBLAS_OP_CONJG
#define HIPBLAS_OP_N CUBLAS_OP_N
#define HIPBLAS_OP_T CUBLAS_OP_T
#define HIPBLAS_PEDANTIC_MATH CUBLAS_PEDANTIC_MATH
#define HIPBLAS_POINTER_MODE_DEVICE CUBLAS_POINTER_MODE_DEVICE
#define HIPBLAS_POINTER_MODE_HOST CUBLAS_POINTER_MODE_HOST
#define HIPBLAS_R_16F CUDA_R_16F
#define HIPBLAS_R_32F CUDA_R_32F
#define HIPBLAS_R_32I CUDA_R_32I
#define HIPBLAS_R_32U CUDA_R_32U
#define HIPBLAS_R_64F CUDA_R_64F
#define HIPBLAS_R_8I CUDA_R_8I
#define HIPBLAS_R_8U CUDA_R_8U
#define HIPBLAS_SIDE_LEFT CUBLAS_SIDE_LEFT
#define HIPBLAS_SIDE_RIGHT CUBLAS_SIDE_RIGHT
#define HIPBLAS_STATUS_ALLOC_FAILED CUBLAS_STATUS_ALLOC_FAILED
#define HIPBLAS_STATUS_ARCH_MISMATCH CUBLAS_STATUS_ARCH_MISMATCH
#define HIPBLAS_STATUS_EXECUTION_FAILED CUBLAS_STATUS_EXECUTION_FAILED
#define HIPBLAS_STATUS_INTERNAL_ERROR CUBLAS_STATUS_INTERNAL_ERROR
#define HIPBLAS_STATUS_INVALID_VALUE CUBLAS_STATUS_INVALID_VALUE
#define HIPBLAS_STATUS_LICENSE_ERROR CUBLAS_STATUS_LICENSE_ERROR
#define HIPBLAS_STATUS_MAPPING_ERROR CUBLAS_STATUS_MAPPING_ERROR
#define HIPBLAS_STATUS_NOT_INITIALIZED CUBLAS_STATUS_NOT_INITIALIZED
#define HIPBLAS_STATUS_NOT_SUPPORTED CUBLAS_STATUS_NOT_SUPPORTED
#define HIPBLAS_STATUS_SUCCESS CUBLAS_STATUS_SUCCESS
#define HIPBLAS_TENSOR_OP_MATH CUBLAS_TENSOR_OP_MATH
#define HIPBLAS_TF32_TENSOR_OP_MATH CUBLAS_TF32_TENSOR_OP_MATH
#define hipblasAlloc cublasAlloc
#define hipblasAsumEx cublasAsumEx
#define hipblasAxpyEx cublasAxpyEx
#define hipblasCaxpy cublasCaxpy
#define hipblasCcopy cublasCcopy
#define hipblasCdgmm cublasCdgmm
#define hipblasCdotc cublasCdotc
#define hipblasCdotu cublasCdotu
#define hipblasCgbmv cublasCgbmv
#define hipblasCgeam cublasCgeam
#define hipblasCgelsBatched cublasCgelsBatched
#define hipblasCgemm cublasCgemm
#define hipblasCgemm3m cublasCgemm3m
#define hipblasCgemm3mBatched cublasCgemm3mBatched
#define hipblasCgemm3mEx cublasCgemm3mEx
#define hipblasCgemm3mStridedBatched cublasCgemm3mStridedBatched
#define hipblasCgemmBatched cublasCgemmBatched
#define hipblasCgemmEx cublasCgemmEx
#define hipblasCgemmStridedBatched cublasCgemmStridedBatched
#define hipblasCgemv cublasCgemv
#define hipblasCgeqrfBatched cublasCgeqrfBatched
#define hipblasCgerc cublasCgerc
#define hipblasCgeru cublasCgeru
#define hipblasCgetrfBatched cublasCgetrfBatched
#define hipblasCgetriBatched cublasCgetriBatched
#define hipblasCgetrsBatched cublasCgetrsBatched
#define hipblasChbmv cublasChbmv
#define hipblasChemm cublasChemm
#define hipblasChemv cublasChemv
#define hipblasCher cublasCher
#define hipblasCher2 cublasCher2
#define hipblasCher2k cublasCher2k
#define hipblasCherk cublasCherk
#define hipblasCherk3mEx cublasCherk3mEx
#define hipblasCherkEx cublasCherkEx
#define hipblasCherkx cublasCherkx
#define hipblasChpmv cublasChpmv
#define hipblasChpr cublasChpr
#define hipblasChpr2 cublasChpr2
#define hipblasCmatinvBatched cublasCmatinvBatched
#define hipblasComputeType_t cublasComputeType_t
#define hipblasCopyEx cublasCopyEx
#define hipblasCreate cublasCreate
#define hipblasCrot cublasCrot
#define hipblasCrotg cublasCrotg
#define hipblasCscal cublasCscal
#define hipblasCsrot cublasCsrot
#define hipblasCsscal cublasCsscal
#define hipblasCswap cublasCswap
#define hipblasCsymm cublasCsymm
#define hipblasCsymv cublasCsymv
#define hipblasCsyr cublasCsyr
#define hipblasCsyr2 cublasCsyr2
#define hipblasCsyr2k cublasCsyr2k
#define hipblasCsyrk cublasCsyrk
#define hipblasCsyrk3mEx cublasCsyrk3mEx
#define hipblasCsyrkEx cublasCsyrkEx
#define hipblasCsyrkx cublasCsyrkx
#define hipblasCtbmv cublasCtbmv
#define hipblasCtbsv cublasCtbsv
#define hipblasCtpmv cublasCtpmv
#define hipblasCtpsv cublasCtpsv
#define hipblasCtpttr cublasCtpttr
#define hipblasCtrmm cublasCtrmm
#define hipblasCtrmv cublasCtrmv
#define hipblasCtrsm cublasCtrsm
#define hipblasCtrsmBatched cublasCtrsmBatched
#define hipblasCtrsv cublasCtrsv
#define hipblasCtrttp cublasCtrttp
#define hipblasDasum cublasDasum
#define hipblasDatatype_t cublasDataType_t
#define hipblasDaxpy cublasDaxpy
#define hipblasDcopy cublasDcopy
#define hipblasDdgmm cublasDdgmm
#define hipblasDdot cublasDdot
#define hipblasDestroy cublasDestroy
#define hipblasDgbmv cublasDgbmv
#define hipblasDgeam cublasDgeam
#define hipblasDgelsBatched cublasDgelsBatched
#define hipblasDgemm cublasDgemm
#define hipblasDgemmBatched cublasDgemmBatched
#define hipblasDgemmStridedBatched cublasDgemmStridedBatched
#define hipblasDgemv cublasDgemv
#define hipblasDgeqrfBatched cublasDgeqrfBatched
#define hipblasDger cublasDger
#define hipblasDgetrfBatched cublasDgetrfBatched
#define hipblasDgetriBatched cublasDgetriBatched
#define hipblasDgetrsBatched cublasDgetrsBatched
#define hipblasDiagType_t cublasDiagType_t
#define hipblasDmatinvBatched cublasDmatinvBatched
#define hipblasDnrm2 cublasDnrm2
#define hipblasDotEx cublasDotEx
#define hipblasDotcEx cublasDotcEx
#define hipblasDrot cublasDrot
#define hipblasDrotg cublasDrotg
#define hipblasDrotm cublasDrotm
#define hipblasDrotmg cublasDrotmg
#define hipblasDsbmv cublasDsbmv
#define hipblasDscal cublasDscal
#define hipblasDspmv cublasDspmv
#define hipblasDspr cublasDspr
#define hipblasDspr2 cublasDspr2
#define hipblasDswap cublasDswap
#define hipblasDsymm cublasDsymm
#define hipblasDsymv cublasDsymv
#define hipblasDsyr cublasDsyr
#define hipblasDsyr2 cublasDsyr2
#define hipblasDsyr2k cublasDsyr2k
#define hipblasDsyrk cublasDsyrk
#define hipblasDsyrkx cublasDsyrkx
#define hipblasDtbmv cublasDtbmv
#define hipblasDtbsv cublasDtbsv
#define hipblasDtpmv cublasDtpmv
#define hipblasDtpsv cublasDtpsv
#define hipblasDtpttr cublasDtpttr
#define hipblasDtrmm cublasDtrmm
#define hipblasDtrmv cublasDtrmv
#define hipblasDtrsm cublasDtrsm
#define hipblasDtrsmBatched cublasDtrsmBatched
#define hipblasDtrsv cublasDtrsv
#define hipblasDtrttp cublasDtrttp
#define hipblasDzasum cublasDzasum
#define hipblasDznrm2 cublasDznrm2
#define hipblasFillMode_t cublasFillMode_t
#define hipblasFree cublasFree
#define hipblasGemmAlgo_t cublasGemmAlgo_t
#define hipblasGemmBatchedEx cublasGemmBatchedEx
#define hipblasGemmEx cublasGemmEx
#define hipblasGemmStridedBatchedEx cublasGemmStridedBatchedEx
#define hipblasGetAtomicsMode cublasGetAtomicsMode
#define hipblasGetCudartVersion cublasGetCudartVersion
#define hipblasGetError cublasGetError
#define hipblasGetLoggerCallback cublasGetLoggerCallback
#define hipblasGetMathMode cublasGetMathMode
#define hipblasGetMatrix cublasGetMatrix
#define hipblasGetMatrixAsync cublasGetMatrixAsync
#define hipblasGetPointerMode cublasGetPointerMode
#define hipblasGetProperty cublasGetProperty
#define hipblasGetStream cublasGetStream
#define hipblasGetVector cublasGetVector
#define hipblasGetVectorAsync cublasGetVectorAsync
#define hipblasGetVersion cublasGetVersion
#define hipblasHandle_t cublasHandle_t
#define hipblasHgemm cublasHgemm
#define hipblasHgemmBatched cublasHgemmBatched
#define hipblasHgemmStridedBatched cublasHgemmStridedBatched
#define hipblasIamaxEx cublasIamaxEx
#define hipblasIaminEx cublasIaminEx
#define hipblasIcamax cublasIcamax
#define hipblasIcamin cublasIcamin
#define hipblasIdamax cublasIdamax
#define hipblasIdamin cublasIdamin
#define hipblasInit cublasInit
#define hipblasIsamax cublasIsamax
#define hipblasIsamin cublasIsamin
#define hipblasIzamax cublasIzamax
#define hipblasIzamin cublasIzamin
#define hipblasLogCallback cublasLogCallback
#define hipblasLoggerConfigure cublasLoggerConfigure
#define hipblasMath_t cublasMath_t
#define hipblasMigrateComputeType cublasMigrateComputeType
#define hipblasNrm2Ex cublasNrm2Ex
#define hipblasOperation_t cublasOperation_t
#define hipblasPointerMode_t cublasPointerMode_t
#define hipblasRotEx cublasRotEx
#define hipblasRotgEx cublasRotgEx
#define hipblasRotmEx cublasRotmEx
#define hipblasRotmgEx cublasRotmgEx
#define hipblasSasum cublasSasum
#define hipblasSaxpy cublasSaxpy
#define hipblasScalEx cublasScalEx
#define hipblasScasum cublasScasum
#define hipblasScnrm2 cublasScnrm2
#define hipblasScopy cublasScopy
#define hipblasSdgmm cublasSdgmm
#define hipblasSdot cublasSdot
#define hipblasSetAtomicsMode cublasSetAtomicsMode
#define hipblasSetKernelStream cublasSetKernelStream
#define hipblasSetLoggerCallback cublasSetLoggerCallback
#define hipblasSetMathMode cublasSetMathMode
#define hipblasSetMatrix cublasSetMatrix
#define hipblasSetMatrixAsync cublasSetMatrixAsync
#define hipblasSetPointerMode cublasSetPointerMode
#define hipblasSetStream cublasSetStream
#define hipblasSetVector cublasSetVector
#define hipblasSetVectorAsync cublasSetVectorAsync
#define hipblasSgbmv cublasSgbmv
#define hipblasSgeam cublasSgeam
#define hipblasSgelsBatched cublasSgelsBatched
#define hipblasSgemm cublasSgemm
#define hipblasSgemmBatched cublasSgemmBatched
#define hipblasSgemmEx cublasSgemmEx
#define hipblasSgemmStridedBatched cublasSgemmStridedBatched
#define hipblasSgemv cublasSgemv
#define hipblasSgeqrfBatched cublasSgeqrfBatched
#define hipblasSger cublasSger
#define hipblasSgetrfBatched cublasSgetrfBatched
#define hipblasSgetriBatched cublasSgetriBatched
#define hipblasSgetrsBatched cublasSgetrsBatched
#define hipblasShutdown cublasShutdown
#define hipblasSideMode_t cublasSideMode_t
#define hipblasSmatinvBatched cublasSmatinvBatched
#define hipblasSnrm2 cublasSnrm2
#define hipblasSrot cublasSrot
#define hipblasSrotg cublasSrotg
#define hipblasSrotm cublasSrotm
#define hipblasSrotmg cublasSrotmg
#define hipblasSsbmv cublasSsbmv
#define hipblasSscal cublasSscal
#define hipblasSspmv cublasSspmv
#define hipblasSspr cublasSspr
#define hipblasSspr2 cublasSspr2
#define hipblasSswap cublasSswap
#define hipblasSsymm cublasSsymm
#define hipblasSsymv cublasSsymv
#define hipblasSsyr cublasSsyr
#define hipblasSsyr2 cublasSsyr2
#define hipblasSsyr2k cublasSsyr2k
#define hipblasSsyrk cublasSsyrk
#define hipblasSsyrkx cublasSsyrkx
#define hipblasStatus_t cublasStatus
#define hipblasStbmv cublasStbmv
#define hipblasStbsv cublasStbsv
#define hipblasStpmv cublasStpmv
#define hipblasStpsv cublasStpsv
#define hipblasStpttr cublasStpttr
#define hipblasStrmm cublasStrmm
#define hipblasStrmv cublasStrmv
#define hipblasStrsm cublasStrsm
#define hipblasStrsmBatched cublasStrsmBatched
#define hipblasStrsv cublasStrsv
#define hipblasStrttp cublasStrttp
#define hipblasSwapEx cublasSwapEx
#define hipblasUint8gemmBias cublasUint8gemmBias
#define hipblasXerbla cublasXerbla
#define hipblasZaxpy cublasZaxpy
#define hipblasZcopy cublasZcopy
#define hipblasZdgmm cublasZdgmm
#define hipblasZdotc cublasZdotc
#define hipblasZdotu cublasZdotu
#define hipblasZdrot cublasZdrot
#define hipblasZdscal cublasZdscal
#define hipblasZgbmv cublasZgbmv
#define hipblasZgeam cublasZgeam
#define hipblasZgelsBatched cublasZgelsBatched
#define hipblasZgemm cublasZgemm
#define hipblasZgemm3m cublasZgemm3m
#define hipblasZgemmBatched cublasZgemmBatched
#define hipblasZgemmStridedBatched cublasZgemmStridedBatched
#define hipblasZgemv cublasZgemv
#define hipblasZgeqrfBatched cublasZgeqrfBatched
#define hipblasZgerc cublasZgerc
#define hipblasZgeru cublasZgeru
#define hipblasZgetrfBatched cublasZgetrfBatched
#define hipblasZgetriBatched cublasZgetriBatched
#define hipblasZgetrsBatched cublasZgetrsBatched
#define hipblasZhbmv cublasZhbmv
#define hipblasZhemm cublasZhemm
#define hipblasZhemv cublasZhemv
#define hipblasZher cublasZher
#define hipblasZher2 cublasZher2
#define hipblasZher2k cublasZher2k
#define hipblasZherk cublasZherk
#define hipblasZherkx cublasZherkx
#define hipblasZhpmv cublasZhpmv
#define hipblasZhpr cublasZhpr
#define hipblasZhpr2 cublasZhpr2
#define hipblasZmatinvBatched cublasZmatinvBatched
#define hipblasZrot cublasZrot
#define hipblasZrotg cublasZrotg
#define hipblasZscal cublasZscal
#define hipblasZswap cublasZswap
#define hipblasZsymm cublasZsymm
#define hipblasZsymv cublasZsymv
#define hipblasZsyr cublasZsyr
#define hipblasZsyr2 cublasZsyr2
#define hipblasZsyr2k cublasZsyr2k
#define hipblasZsyrk cublasZsyrk
#define hipblasZsyrkx cublasZsyrkx
#define hipblasZtbmv cublasZtbmv
#define hipblasZtbsv cublasZtbsv
#define hipblasZtpmv cublasZtpmv
#define hipblasZtpsv cublasZtpsv
#define hipblasZtpttr cublasZtpttr
#define hipblasZtrmm cublasZtrmm
#define hipblasZtrmv cublasZtrmv
#define hipblasZtrsm cublasZtrsm
#define hipblasZtrsmBatched cublasZtrsmBatched
#define hipblasZtrsv cublasZtrsv
#define hipblasZtrttp cublasZtrttp
