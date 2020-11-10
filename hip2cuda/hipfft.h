#pragma once
#include <cufft.h>
#define HIPFFT_ALLOC_FAILED CUFFT_ALLOC_FAILED
#define HIPFFT_BACKWARD CUFFT_INVERSE
#define HIPFFT_C2C CUFFT_C2C
#define HIPFFT_C2R CUFFT_C2R
#define HIPFFT_D2Z CUFFT_D2Z
#define HIPFFT_EXEC_FAILED CUFFT_EXEC_FAILED
#define HIPFFT_FORWARD CUFFT_FORWARD
#define HIPFFT_INCOMPLETE_PARAMETER_LIST CUFFT_INCOMPLETE_PARAMETER_LIST
#define HIPFFT_INTERNAL_ERROR CUFFT_INTERNAL_ERROR
#define HIPFFT_INVALID_DEVICE CUFFT_INVALID_DEVICE
#define HIPFFT_INVALID_PLAN CUFFT_INVALID_PLAN
#define HIPFFT_INVALID_SIZE CUFFT_INVALID_SIZE
#define HIPFFT_INVALID_TYPE CUFFT_INVALID_TYPE
#define HIPFFT_INVALID_VALUE CUFFT_INVALID_VALUE
#define HIPFFT_NOT_IMPLEMENTED CUFFT_NOT_IMPLEMENTED
#define HIPFFT_NOT_SUPPORTED CUFFT_NOT_SUPPORTED
#define HIPFFT_NO_WORKSPACE CUFFT_NO_WORKSPACE
#define HIPFFT_PARSE_ERROR CUFFT_PARSE_ERROR
#define HIPFFT_R2C CUFFT_R2C
#define HIPFFT_SETUP_FAILED CUFFT_SETUP_FAILED
#define HIPFFT_SUCCESS CUFFT_SUCCESS
#define HIPFFT_UNALIGNED_DATA CUFFT_UNALIGNED_DATA
#define HIPFFT_Z2D CUFFT_Z2D
#define HIPFFT_Z2Z CUFFT_Z2Z
#define hipfftComplex cufftComplex
#define hipfftCreate cufftCreate
#define hipfftDestroy cufftDestroy
#define hipfftDoubleComplex cufftDoubleComplex
#define hipfftDoubleReal cufftDoubleReal
#define hipfftEstimate1d cufftEstimate1d
#define hipfftEstimate2d cufftEstimate2d
#define hipfftEstimate3d cufftEstimate3d
#define hipfftEstimateMany cufftEstimateMany
#define hipfftExecC2C cufftExecC2C
#define hipfftExecC2R cufftExecC2R
#define hipfftExecD2Z cufftExecD2Z
#define hipfftExecR2C cufftExecR2C
#define hipfftExecZ2D cufftExecZ2D
#define hipfftExecZ2Z cufftExecZ2Z
#define hipfftGetProperty cufftGetProperty
#define hipfftGetSize cufftGetSize
#define hipfftGetSize1d cufftGetSize1d
#define hipfftGetSize2d cufftGetSize2d
#define hipfftGetSize3d cufftGetSize3d
#define hipfftGetSizeMany cufftGetSizeMany
#define hipfftGetSizeMany64 cufftGetSizeMany64
#define hipfftGetVersion cufftGetVersion
#define hipfftHandle cufftHandle
#define hipfftMakePlan1d cufftMakePlan1d
#define hipfftMakePlan2d cufftMakePlan2d
#define hipfftMakePlan3d cufftMakePlan3d
#define hipfftMakePlanMany cufftMakePlanMany
#define hipfftMakePlanMany64 cufftMakePlanMany64
#define hipfftPlan1d cufftPlan1d
#define hipfftPlan2d cufftPlan2d
#define hipfftPlan3d cufftPlan3d
#define hipfftPlanMany cufftPlanMany
#define hipfftReal cufftReal
#define hipfftResult cufftResult
#define hipfftResult_t cufftResult_t
#define hipfftSetAutoAllocation cufftSetAutoAllocation
#define hipfftSetStream cufftSetStream
#define hipfftSetWorkArea cufftSetWorkArea
#define hipfftType cufftType
#define hipfftType_t cufftType_t
