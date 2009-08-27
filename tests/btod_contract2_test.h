#ifndef LIBTENSOR_BTOD_CONTRACT2_TEST_H
#define LIBTENSOR_BTOD_CONTRACT2_TEST_H

#include <libtest.h>

namespace libtensor {

/**	\brief Tests the libtensor::btod_contract2 class

	\ingroup libtensor_tests
**/
class btod_contract2_test : public libtest::unit_test {
public:
	virtual void perform() throw(libtest::test_exception);

private:
	void test_bis_1() throw(libtest::test_exception);
	void test_bis_2() throw(libtest::test_exception);
	void test_sym_1() throw(libtest::test_exception);
	void test_sym_2() throw(libtest::test_exception);
	void test_contr_1() throw(libtest::test_exception);
	void test_contr_2() throw(libtest::test_exception);
	void test_contr_3() throw(libtest::test_exception);
	void test_contr_4() throw(libtest::test_exception);
	void test_contr_5() throw(libtest::test_exception);
	void test_contr_6() throw(libtest::test_exception);
};

} // namespace libtensor

#endif // LIBTENSOR_BTOD_CONTRACT2_TEST_H
