#pragma once

#include <cmath>

//! @brief Math Float
namespace MathF {
	//! @brief 상수
	inline namespace Constants {
		constexpr auto PI = 3.141592F;
		constexpr auto HALF_PI = PI / 2.0F;
		constexpr auto TWO_PI = PI * 2.0F;

		constexpr auto DEGREES = 57.2957795F;
		constexpr auto RADIANS = 0.01745329F;
	}

	//! @brief 함수
	inline namespace Functions {
		//! @brief Degree를 Radian으로 변환합니다.
		//! @param degree Degree
		//! @return Radian
		static inline const float DegreeToRadian(const float degree) noexcept {
			return (PI / 180.0F) * degree;
		}

		//! @brief Radian을 Degree로 변환합니다.
		//! @param radian Radian
		//! @return Degree
		static inline const float RadianToDegree(const float radian) noexcept {
			return (180.0F / PI) * radian;
		}

		//! @brief 절대값을 취득합니다.
		//! @param x 값
		//! @return 절대값
		static inline const float Abs(const float x) noexcept {
			return std::fabsf(x);
		}

		//! @brief 나머지를 취득합니다.
		//! @param x 값
		//! @param y 몫
		//! @return 나머지
		static inline const float Mod(const float x, const float y) noexcept {
			return std::fmodf(x, y);
		}

		//! @brief 소수 부분을 취득합니다.
		//! @param x 값
		//! @return 소수
		static inline const float Fraction(const float x) noexcept {
			return (x - std::floorf(x));
		}

		//! @brief e를 밑으로 하는 로그 연산을 수행합니다.
		//! @param x 값
		//! @return 로그 연산으로 산출된 값
		static inline const float Log(const float x) noexcept {
			return std::logf(x);
		}

		//! @brief 2를 밑으로 하는 로그 연산을 수행합니다.
		//! @param x 값
		//! @return 2를 밑으로 하는 로그 연산으로 산출된 값
		static inline const float Log2(const float x) noexcept {
			return std::log2f(x);
		}

		//! @brief 10을 밑으로 하는 로그 연산을 수행합니다.
		//! @param x 값
		//! @return 10을 밑으로 하는 로그 연산으로 산출된 값
		static inline const float Log10(const float x) noexcept {
			return std::log10f(x);
		}

		//! @brief 제곱 연산을 수행합니다.
		//! @param x 밑
		//! @param y 지수
		//! @return 제곱 연산으로 산출된 값
		static inline const float Pow(const float x, const float y) noexcept {
			return std::powf(x, y);
		}

		//! @brief e를 밑으로 하는 지수 연산을 수행합니다.
		//! @param x 값
		//! @return 지수 연산으로 산출된 값
		static inline const float Exp(const float x) noexcept {
			return std::expf(x);
		}

		//! @brief 2를 밑으로 하는 지수 연산을 수행합니다.
		//! @param x 값
		//! @return 2를 밑으로 하는 지수 연산으로 산출된 값
		static inline const float Exp2(const float x) noexcept {
			return std::exp2f(x);
		}

		//! @brief 제곱근을 구합니다.
		//! @param x 값
		//! @return 제곱근
		static inline const float Sqrt(const float x) noexcept {
			return std::sqrtf(x);
		}

		//! @brief 소수점 이하 내림 연산을 수행합니다.
		//! @param x 값
		//! @return 소수점 이하 내림 연산 후 산출된 값
		static inline const float Floor(const float x) noexcept {
			return std::floorf(x);
		}

		//! @brief 소수점 이하 반올림 연산을 수행합니다.
		//! @param x 값
		//! @return 소수점 이하 반올림 연산 후 산출된 값
		static inline const float Round(const float x) noexcept {
			return std::roundf(x);
		}

		//! @brief 소수점 이하 버림 연산을 수행합니다.
		//! @param x 값
		//! @return 소수점 이하 버림 연산 후 산출된 값
		static inline const float Trunc(const float x) noexcept {
			return std::truncf(x);
		}

		//! @brief 소수점 이하 올림 연산을 수행합니다.
		//! @param x 값
		//! @return 소수점 이하 올림 연산 후 산출된 값
		static inline const float Ceil(const float x) noexcept {
			return std::ceilf(x);
		}

		//! @brief 역 코사인 연산을 수행합니다.
		//! @param x 값
		//! @return 역 코사인 연산 후 산출된 값
		static inline const float Acos(const float x) noexcept {
			return std::acosf(x);
		}

		//! @brief 역 쌍곡선 코사인 연산을 수행합니다.
		//! @param x 값
		//! @return 역 쌍곡선 코사인 연산을 수행합니다.
		static inline const float Acosh(const float x) noexcept {
			return std::acoshf(x);
		}

		//! @brief 역 사인 연산을 수행합니다.
		//! @param x 값
		//! @return 역 사인 연산 후 산출된 값
		static inline const float Asin(const float x) noexcept {
			return std::asinf(x);
		}

		//! @brief 역 쌍곡선 사인 연산을 수행합니다.
		//! @param x 값
		//! @return 역 쌍곡선 사인 연산 후 산출된 값
		static inline const float Asinh(const float x) noexcept {
			return std::asinhf(x);
		}

		//! @brief 역 탄젠트 연산을 수행합니다.
		//! @param x 값
		//! @return 역 탄젠트 연산 후 산출된 값
		static inline const float Atan(const float x) noexcept {
			return std::atanf(x);
		}

		//! @brief 인수가 2개인 역 탄젠트 연산을 수행합니다.
		//! @param x 인수 1
		//! @param y 인수 2
		//! @return 인수가 2개인 역 탄젠트 연산 후 산출된 값
		static inline const float Atan2(const float x, const float y) noexcept {
			return std::atan2f(y, x);
		}

		//! @brief 역 쌍곡선 탄젠트 연산을 수행합니다.
		//! @param x 값
		//! @return 역 쌍곡선 탄젠트 연산 후 산출된 값
		static inline const float Atanh(const float x) noexcept {
			return std::atanhf(x);
		}

		//! @brief 코사인 연산을 수행합니다.
		//! @param x 값
		//! @return 코사인 연산 후 산출된 값
		static inline const float Cos(const float x) noexcept {
			return std::cosf(x);
		}

		//! @brief 쌍곡선 코사인 연산을 수행합니다.
		//! @param x 값
		//! @return 쌍곡선 코사인 연산 후 산출된 값
		static inline const float Cosh(const float x) noexcept {
			return std::coshf(x);
		}

		//! @brief 사인 연산을 수행합니다.
		//! @param x 값
		//! @return 사인 연산 후 산출된 값
		static inline const float Sin(const float x) noexcept {
			return std::sinf(x);
		}

		//! @brief 쌍곡선 사인 연산을 수행합니다.
		//! @param x 값
		//! @return 쌍곡선 사인 연산 후 산출된 값
		static inline const float Sinh(const float x) noexcept {
			return std::sinhf(x);
		}

		//! @brief 탄젠트 연산을 수행합니다.
		//! @param x 값
		//! @return 탄젠트 연산 후 산출된 값
		static inline const float Tan(const float x) noexcept {
			return std::tanf(x);
		}

		//! @brief 쌍곡선 탄젠트 연산을 수행합니다.
		//! @param x 값
		//! @return 쌍곡선 탄젠트 연산 후 산출된 값
		static inline const float Tanh(const float x) noexcept {
			return std::tanhf(x);
		}
	}
}
