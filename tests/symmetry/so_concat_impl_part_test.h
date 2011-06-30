#ifndef LIBTENSOR_SO_CONCAT_IMPL_PART_TEST_H
#define LIBTENSOR_SO_CONCAT_IMPL_PART_TEST_H

#include <libtest/unit_test.h>

namespace libtensor {


/**	\brief Tests the libtensor::so_concat_impl_part class

	\ingroup libtensor_tests_sym
 **/
class so_concat_impl_part_test : public libtest::unit_test {
public:
	virtual void perform() throw(libtest::test_exception);

private:
	void test_1() throw(libtest::test_exception);
	void test_2(bool sign) throw(libtest::test_exception);
	void test_3(bool sign) throw(libtest::test_exception);
	void test_4(bool sign) throw(libtest::test_exception);
	void test_5(bool sign) throw(libtest::test_exception);
	void test_6() throw(libtest::test_exception);
	void test_7() throw(libtest::test_exception);
    void test_8(bool sign) throw(libtest::test_exception);

};


} // namespace libtensor

#endif // LIBTENSOR_SO_CONCAT_IMPL_PART_TEST_H

