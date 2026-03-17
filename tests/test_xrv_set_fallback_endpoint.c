/*
 * Unit test stubs for xrv_set_fallback_endpoint()
 *
 * The xr-voice-sdk repository template does not currently wire a test runner.
 * This file exists as a placeholder following repository conventions for adding
 * unit tests later without changing production code behavior.
 *
 * Intended tests:
 *  1) xrv_set_fallback_endpoint(NULL) clears any existing fallback URL and returns success
 *  2) xrv_set_fallback_endpoint("") clears and returns success
 *  3) xrv_set_fallback_endpoint("wss://backup.example.com") sets and returns success
 *  4) xrv_set_fallback_endpoint("not-a-url") returns failure
 */

#include <assert.h>
#include <stdio.h>

#include "xr_voice_sdk.h"
#include "vsdk_private.h"

static void test_clear_fallback_endpoint(void) {
   int rc = xrv_set_fallback_endpoint("wss://backup.example.com/voice");
   assert(rc == 0);
   assert(vsdk_fallback_endpoint_get() != NULL);

   rc = xrv_set_fallback_endpoint(NULL);
   assert(rc == 0);
   assert(vsdk_fallback_endpoint_get() == NULL);
}

static void test_invalid_url_rejected(void) {
   int rc = xrv_set_fallback_endpoint("not-a-url");
   assert(rc != 0);
}

int main(void) {
   // Stub runner: not integrated into CTest yet.
   // Running manually should still validate basic behavior.
   test_clear_fallback_endpoint();
   test_invalid_url_rejected();

   printf("test_xrv_set_fallback_endpoint: OK (stub)\n");
   return 0;
}
