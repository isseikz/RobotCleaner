// native 環境でテストが実行できることを確認するためのスモークテスト。
// 実ロジックのテストが追加されたら削除してよい。
#include <unity.h>

void setUp() {}
void tearDown() {}

static void test_native_environment_runs() {
    TEST_ASSERT_EQUAL_INT(4, sizeof(int));
}

int main(int, char **) {
    UNITY_BEGIN();
    RUN_TEST(test_native_environment_runs);
    return UNITY_END();
}
