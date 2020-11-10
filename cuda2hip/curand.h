#pragma once
#include <hiprand.hpp>
#define CURAND_RNG_PSEUDO_DEFAULT HIPRAND_RNG_PSEUDO_DEFAULT
#define CURAND_RNG_PSEUDO_MRG32K3A HIPRAND_RNG_PSEUDO_MRG32K3A
#define CURAND_RNG_PSEUDO_MT19937 HIPRAND_RNG_PSEUDO_MT19937
#define CURAND_RNG_PSEUDO_MTGP32 HIPRAND_RNG_PSEUDO_MTGP32
#define CURAND_RNG_PSEUDO_PHILOX4_32_10 HIPRAND_RNG_PSEUDO_PHILOX4_32_10
#define CURAND_RNG_PSEUDO_XORWOW HIPRAND_RNG_PSEUDO_XORWOW
#define CURAND_RNG_QUASI_DEFAULT HIPRAND_RNG_QUASI_DEFAULT
#define CURAND_RNG_QUASI_SCRAMBLED_SOBOL32 HIPRAND_RNG_QUASI_SCRAMBLED_SOBOL32
#define CURAND_RNG_QUASI_SCRAMBLED_SOBOL64 HIPRAND_RNG_QUASI_SCRAMBLED_SOBOL64
#define CURAND_RNG_QUASI_SOBOL32 HIPRAND_RNG_QUASI_SOBOL32
#define CURAND_RNG_QUASI_SOBOL64 HIPRAND_RNG_QUASI_SOBOL64
#define CURAND_RNG_TEST HIPRAND_RNG_TEST
#define CURAND_STATUS_ALLOCATION_FAILED HIPRAND_STATUS_ALLOCATION_FAILED
#define CURAND_STATUS_ARCH_MISMATCH HIPRAND_STATUS_ARCH_MISMATCH
#define CURAND_STATUS_DOUBLE_PRECISION_REQUIRED HIPRAND_STATUS_DOUBLE_PRECISION_REQUIRED
#define CURAND_STATUS_INITIALIZATION_FAILED HIPRAND_STATUS_INITIALIZATION_FAILED
#define CURAND_STATUS_INTERNAL_ERROR HIPRAND_STATUS_INTERNAL_ERROR
#define CURAND_STATUS_LAUNCH_FAILURE HIPRAND_STATUS_LAUNCH_FAILURE
#define CURAND_STATUS_LENGTH_NOT_MULTIPLE HIPRAND_STATUS_LENGTH_NOT_MULTIPLE
#define CURAND_STATUS_NOT_INITIALIZED HIPRAND_STATUS_NOT_INITIALIZED
#define CURAND_STATUS_OUT_OF_RANGE HIPRAND_STATUS_OUT_OF_RANGE
#define CURAND_STATUS_PREEXISTING_FAILURE HIPRAND_STATUS_PREEXISTING_FAILURE
#define CURAND_STATUS_SUCCESS HIPRAND_STATUS_SUCCESS
#define CURAND_STATUS_TYPE_ERROR HIPRAND_STATUS_TYPE_ERROR
#define CURAND_STATUS_VERSION_MISMATCH HIPRAND_STATUS_VERSION_MISMATCH
#define curand hiprand
#define curandCreateGenerator hiprandCreateGenerator
#define curandCreateGeneratorHost hiprandCreateGeneratorHost
#define curandCreatePoissonDistribution hiprandCreatePoissonDistribution
#define curandDestroyDistribution hiprandDestroyDistribution
#define curandDestroyGenerator hiprandDestroyGenerator
#define curandDirectionVectors32_t hiprandDirectionVectors32_t
#define curandDiscreteDistribution_st hiprandDiscreteDistribution_st
#define curandDiscreteDistribution_t hiprandDiscreteDistribution_t
#define curandGenerate hiprandGenerate
#define curandGenerateLogNormal hiprandGenerateLogNormal
#define curandGenerateLogNormalDouble hiprandGenerateLogNormalDouble
#define curandGenerateNormal hiprandGenerateNormal
#define curandGenerateNormalDouble hiprandGenerateNormalDouble
#define curandGeneratePoisson hiprandGeneratePoisson
#define curandGenerateSeeds hiprandGenerateSeeds
#define curandGenerateUniform hiprandGenerateUniform
#define curandGenerateUniformDouble hiprandGenerateUniformDouble
#define curandGenerator_st hiprandGenerator_st
#define curandGenerator_t hiprandGenerator_t
#define curandGetVersion hiprandGetVersion
#define curandMakeMTGP32Constants hiprandMakeMTGP32Constants
#define curandMakeMTGP32KernelState hiprandMakeMTGP32KernelState
#define curandRngType hiprandRngType_t
#define curandRngType_t hiprandRngType_t
#define curandSetGeneratorOffset hiprandSetGeneratorOffset
#define curandSetPseudoRandomGeneratorSeed hiprandSetPseudoRandomGeneratorSeed
#define curandSetQuasiRandomGeneratorDimensions hiprandSetQuasiRandomGeneratorDimensions
#define curandSetStream hiprandSetStream
#define curandState hiprandState
#define curandStateMRG32k3a hiprandStateMRG32k3a
#define curandStateMRG32k3a_t hiprandStateMRG32k3a_t
#define curandStateMtgp32 hiprandStateMtgp32
#define curandStateMtgp32_t hiprandStateMtgp32_t
#define curandStatePhilox4_32_10 hiprandStatePhilox4_32_10
#define curandStatePhilox4_32_10_t hiprandStatePhilox4_32_10_t
#define curandStateSobol32 hiprandStateSobol32
#define curandStateSobol32_t hiprandStateSobol32_t
#define curandStateXORWOW hiprandStateXORWOW
#define curandStateXORWOW_t hiprandStateXORWOW_t
#define curandState_t hiprandState_t
#define curandStatus hiprandStatus_t
#define curandStatus_t hiprandStatus_t
#define curand_discrete hiprand_discrete
#define curand_discrete4 hiprand_discrete4
#define curand_init hiprand_init
#define curand_log_normal hiprand_log_normal
#define curand_log_normal2 hiprand_log_normal2
#define curand_log_normal2_double hiprand_log_normal2_double
#define curand_log_normal4 hiprand_log_normal4
#define curand_log_normal4_double hiprand_log_normal4_double
#define curand_log_normal_double hiprand_log_normal_double
#define curand_normal hiprand_normal
#define curand_normal2 hiprand_normal2
#define curand_normal2_double hiprand_normal2_double
#define curand_normal4 hiprand_normal4
#define curand_normal4_double hiprand_normal4_double
#define curand_normal_double hiprand_normal_double
#define curand_poisson hiprand_poisson
#define curand_poisson4 hiprand_poisson4
#define curand_uniform hiprand_uniform
#define curand_uniform2_double hiprand_uniform2_double
#define curand_uniform4 hiprand_uniform4
#define curand_uniform4_double hiprand_uniform4_double
#define curand_uniform_double hiprand_uniform_double
