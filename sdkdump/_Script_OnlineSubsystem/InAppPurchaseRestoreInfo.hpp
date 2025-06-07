#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystem {
#pragma pack(push, 1)
struct InAppPurchaseRestoreInfo {
    private: char pad_0[0x30]; public:
    void* get_Identifier();
    void* get_ReceiptData();
    void* get_TransactionIdentifier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
