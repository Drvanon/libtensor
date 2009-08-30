#ifndef LIBTENSOR_BISPACE_EXPR_TEST_H
#define	LIBTENSOR_BISPACE_EXPR_TEST_H

#include <libtest.h>

namespace libtensor {

/**	\brief Tests the libtensor::bispace_expr::expr class

	\ingroup libtensor_tests
 **/
class bispace_expr_test : public libtest::unit_test {
public:
	virtual void perform() throw(libtest::test_exception);

private:
	void test_1() throw(libtest::test_exception);
	void test_2() throw(libtest::test_exception);
	void test_3() throw(libtest::test_exception);
	void test_4() throw(libtest::test_exception);
	void test_5() throw(libtest::test_exception);
	void test_6() throw(libtest::test_exception);
	void test_7() throw(libtest::test_exception);
	void test_8() throw(libtest::test_exception);

	void test_exc_1() throw(libtest::test_exception);

};

} // namespace libtensor

#endif // LIBTENSOR_BISPACE_EXPR_TEST_H

