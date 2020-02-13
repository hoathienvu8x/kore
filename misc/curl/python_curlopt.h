/* Auto generated on Sat Jan 18 19:42:48 CET 2020 from 7.64.1 */

struct {
	const char	*name;
	int		value;
	PyObject	*(*cb)(struct pycurl_handle *, int, PyObject *);
} py_curlopt[] = {
	{ "CURLOPT_WRITEDATA", 1, NULL },
	{ "CURLOPT_URL", 2, pycurl_handle_setopt_string },
	{ "CURLOPT_PORT", 3, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXY", 4, pycurl_handle_setopt_string },
	{ "CURLOPT_USERPWD", 5, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXYUSERPWD", 6, pycurl_handle_setopt_string },
	{ "CURLOPT_RANGE", 7, pycurl_handle_setopt_string },
	{ "CURLOPT_READDATA", 9, NULL },
	{ "CURLOPT_ERRORBUFFER", 10, NULL },
	{ "CURLOPT_WRITEFUNCTION", 11, NULL },
	{ "CURLOPT_READFUNCTION", 12, NULL },
	{ "CURLOPT_TIMEOUT", 13, pycurl_handle_setopt_long },
	{ "CURLOPT_INFILESIZE", 14, pycurl_handle_setopt_long },
	{ "CURLOPT_POSTFIELDS", 15, NULL },
	{ "CURLOPT_REFERER", 16, pycurl_handle_setopt_string },
	{ "CURLOPT_FTPPORT", 17, pycurl_handle_setopt_string },
	{ "CURLOPT_USERAGENT", 18, pycurl_handle_setopt_string },
	{ "CURLOPT_LOW_SPEED_LIMIT", 19, pycurl_handle_setopt_long },
	{ "CURLOPT_LOW_SPEED_TIME", 20, pycurl_handle_setopt_long },
	{ "CURLOPT_RESUME_FROM", 21, pycurl_handle_setopt_long },
	{ "CURLOPT_COOKIE", 22, pycurl_handle_setopt_string },
	{ "CURLOPT_HTTPHEADER", 23, NULL },
	{ "CURLOPT_HTTPPOST", 24, NULL },
	{ "CURLOPT_SSLCERT", 25, pycurl_handle_setopt_string },
	{ "CURLOPT_KEYPASSWD", 26, pycurl_handle_setopt_string },
	{ "CURLOPT_CRLF", 27, pycurl_handle_setopt_long },
	{ "CURLOPT_QUOTE", 28, NULL },
	{ "CURLOPT_HEADERDATA", 29, NULL },
	{ "CURLOPT_COOKIEFILE", 31, pycurl_handle_setopt_string },
	{ "CURLOPT_SSLVERSION", 32, pycurl_handle_setopt_long },
	{ "CURLOPT_TIMECONDITION", 33, pycurl_handle_setopt_long },
	{ "CURLOPT_TIMEVALUE", 34, pycurl_handle_setopt_long },
	{ "CURLOPT_CUSTOMREQUEST", 36, pycurl_handle_setopt_string },
	{ "CURLOPT_STDERR", 37, NULL },
	{ "CURLOPT_POSTQUOTE", 39, NULL },
	{ "CURLOPT_NETRC", 51, pycurl_handle_setopt_long },
	{ "CURLOPT_PROGRESSFUNCTION", 56, NULL },
	{ "CURLOPT_PROGRESSDATA", 57, NULL },
	{ "CURLOPT_AUTOREFERER", 58, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXYPORT", 59, pycurl_handle_setopt_long },
	{ "CURLOPT_POSTFIELDSIZE", 60, pycurl_handle_setopt_long },
	{ "CURLOPT_HTTPPROXYTUNNEL", 61, pycurl_handle_setopt_long },
	{ "CURLOPT_INTERFACE", 62, pycurl_handle_setopt_string },
	{ "CURLOPT_KRBLEVEL", 63, pycurl_handle_setopt_string },
	{ "CURLOPT_SSL_VERIFYPEER", 64, pycurl_handle_setopt_long },
	{ "CURLOPT_CAINFO", 65, pycurl_handle_setopt_string },
	{ "CURLOPT_MAXREDIRS", 68, pycurl_handle_setopt_long },
	{ "CURLOPT_FILETIME", 69, pycurl_handle_setopt_long },
	{ "CURLOPT_TELNETOPTIONS", 70, NULL },
	{ "CURLOPT_MAXCONNECTS", 71, pycurl_handle_setopt_long },
	{ "CURLOPT_FRESH_CONNECT", 74, pycurl_handle_setopt_long },
	{ "CURLOPT_FORBID_REUSE", 75, pycurl_handle_setopt_long },
	{ "CURLOPT_RANDOM_FILE", 76, pycurl_handle_setopt_string },
	{ "CURLOPT_EGDSOCKET", 77, pycurl_handle_setopt_string },
	{ "CURLOPT_CONNECTTIMEOUT", 78, pycurl_handle_setopt_long },
	{ "CURLOPT_HEADERFUNCTION", 79, NULL },
	{ "CURLOPT_HTTPGET", 80, pycurl_handle_setopt_long },
	{ "CURLOPT_SSL_VERIFYHOST", 81, pycurl_handle_setopt_long },
	{ "CURLOPT_COOKIEJAR", 82, pycurl_handle_setopt_string },
	{ "CURLOPT_SSL_CIPHER_LIST", 83, pycurl_handle_setopt_string },
	{ "CURLOPT_HTTP_VERSION", 84, pycurl_handle_setopt_long },
	{ "CURLOPT_FTP_USE_EPSV", 85, pycurl_handle_setopt_long },
	{ "CURLOPT_SSLCERTTYPE", 86, pycurl_handle_setopt_string },
	{ "CURLOPT_SSLKEY", 87, pycurl_handle_setopt_string },
	{ "CURLOPT_SSLKEYTYPE", 88, pycurl_handle_setopt_string },
	{ "CURLOPT_SSLENGINE", 89, pycurl_handle_setopt_string },
	{ "CURLOPT_SSLENGINE_DEFAULT", 90, pycurl_handle_setopt_long },
	{ "CURLOPT_DNS_CACHE_TIMEOUT", 92, pycurl_handle_setopt_long },
	{ "CURLOPT_PREQUOTE", 93, NULL },
	{ "CURLOPT_DEBUGFUNCTION", 94, NULL },
	{ "CURLOPT_DEBUGDATA", 95, NULL },
	{ "CURLOPT_COOKIESESSION", 96, pycurl_handle_setopt_long },
	{ "CURLOPT_CAPATH", 97, pycurl_handle_setopt_string },
	{ "CURLOPT_BUFFERSIZE", 98, pycurl_handle_setopt_long },
	{ "CURLOPT_NOSIGNAL", 99, pycurl_handle_setopt_long },
	{ "CURLOPT_SHARE", 100, NULL },
	{ "CURLOPT_PROXYTYPE", 101, pycurl_handle_setopt_long },
	{ "CURLOPT_ACCEPT_ENCODING", 102, pycurl_handle_setopt_string },
	{ "CURLOPT_PRIVATE", 103, NULL },
	{ "CURLOPT_HTTP200ALIASES", 104, NULL },
	{ "CURLOPT_UNRESTRICTED_AUTH", 105, pycurl_handle_setopt_long },
	{ "CURLOPT_FTP_USE_EPRT", 106, pycurl_handle_setopt_long },
	{ "CURLOPT_HTTPAUTH", 107, pycurl_handle_setopt_long },
	{ "CURLOPT_SSL_CTX_FUNCTION", 108, NULL },
	{ "CURLOPT_SSL_CTX_DATA", 109, NULL },
	{ "CURLOPT_FTP_CREATE_MISSING_DIRS", 110, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXYAUTH", 111, pycurl_handle_setopt_long },
	{ "CURLOPT_FTP_RESPONSE_TIMEOUT", 112, pycurl_handle_setopt_long },
	{ "CURLOPT_IPRESOLVE", 113, pycurl_handle_setopt_long },
	{ "CURLOPT_MAXFILESIZE", 114, pycurl_handle_setopt_long },
	{ "CURLOPT_INFILESIZE_LARGE", 115, NULL },
	{ "CURLOPT_RESUME_FROM_LARGE", 116, NULL },
	{ "CURLOPT_MAXFILESIZE_LARGE", 117, NULL },
	{ "CURLOPT_NETRC_FILE", 118, pycurl_handle_setopt_string },
	{ "CURLOPT_USE_SSL", 119, pycurl_handle_setopt_long },
	{ "CURLOPT_POSTFIELDSIZE_LARGE", 120, NULL },
	{ "CURLOPT_TCP_NODELAY", 121, pycurl_handle_setopt_long },
	{ "CURLOPT_FTPSSLAUTH", 129, pycurl_handle_setopt_long },
	{ "CURLOPT_IOCTLFUNCTION", 130, NULL },
	{ "CURLOPT_IOCTLDATA", 131, NULL },
	{ "CURLOPT_FTP_ACCOUNT", 134, pycurl_handle_setopt_string },
	{ "CURLOPT_COOKIELIST", 135, pycurl_handle_setopt_string },
	{ "CURLOPT_IGNORE_CONTENT_LENGTH", 136, pycurl_handle_setopt_long },
	{ "CURLOPT_FTP_SKIP_PASV_IP", 137, pycurl_handle_setopt_long },
	{ "CURLOPT_FTP_FILEMETHOD", 138, pycurl_handle_setopt_long },
	{ "CURLOPT_LOCALPORT", 139, pycurl_handle_setopt_long },
	{ "CURLOPT_LOCALPORTRANGE", 140, pycurl_handle_setopt_long },
	{ "CURLOPT_CONNECT_ONLY", 141, pycurl_handle_setopt_long },
	{ "CURLOPT_CONV_FROM_NETWORK_FUNCTION", 142, NULL },
	{ "CURLOPT_CONV_TO_NETWORK_FUNCTION", 143, NULL },
	{ "CURLOPT_CONV_FROM_UTF8_FUNCTION", 144, NULL },
	{ "CURLOPT_MAX_SEND_SPEED_LARGE", 145, NULL },
	{ "CURLOPT_MAX_RECV_SPEED_LARGE", 146, NULL },
	{ "CURLOPT_FTP_ALTERNATIVE_TO_USER", 147, pycurl_handle_setopt_string },
	{ "CURLOPT_SOCKOPTFUNCTION", 148, NULL },
	{ "CURLOPT_SOCKOPTDATA", 149, NULL },
	{ "CURLOPT_SSL_SESSIONID_CACHE", 150, pycurl_handle_setopt_long },
	{ "CURLOPT_SSH_AUTH_TYPES", 151, pycurl_handle_setopt_long },
	{ "CURLOPT_SSH_PUBLIC_KEYFILE", 152, pycurl_handle_setopt_string },
	{ "CURLOPT_SSH_PRIVATE_KEYFILE", 153, pycurl_handle_setopt_string },
	{ "CURLOPT_FTP_SSL_CCC", 154, pycurl_handle_setopt_long },
	{ "CURLOPT_TIMEOUT_MS", 155, pycurl_handle_setopt_long },
	{ "CURLOPT_CONNECTTIMEOUT_MS", 156, pycurl_handle_setopt_long },
	{ "CURLOPT_HTTP_TRANSFER_DECODING", 157, pycurl_handle_setopt_long },
	{ "CURLOPT_HTTP_CONTENT_DECODING", 158, pycurl_handle_setopt_long },
	{ "CURLOPT_NEW_FILE_PERMS", 159, pycurl_handle_setopt_long },
	{ "CURLOPT_NEW_DIRECTORY_PERMS", 160, pycurl_handle_setopt_long },
	{ "CURLOPT_POSTREDIR", 161, pycurl_handle_setopt_long },
	{ "CURLOPT_SSH_HOST_PUBLIC_KEY_MD5", 162, pycurl_handle_setopt_string },
	{ "CURLOPT_OPENSOCKETFUNCTION", 163, NULL },
	{ "CURLOPT_OPENSOCKETDATA", 164, NULL },
	{ "CURLOPT_COPYPOSTFIELDS", 165, NULL },
	{ "CURLOPT_PROXY_TRANSFER_MODE", 166, pycurl_handle_setopt_long },
	{ "CURLOPT_SEEKFUNCTION", 167, NULL },
	{ "CURLOPT_SEEKDATA", 168, NULL },
	{ "CURLOPT_CRLFILE", 169, pycurl_handle_setopt_string },
	{ "CURLOPT_ISSUERCERT", 170, pycurl_handle_setopt_string },
	{ "CURLOPT_ADDRESS_SCOPE", 171, pycurl_handle_setopt_long },
	{ "CURLOPT_CERTINFO", 172, pycurl_handle_setopt_long },
	{ "CURLOPT_USERNAME", 173, pycurl_handle_setopt_string },
	{ "CURLOPT_PASSWORD", 174, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXYUSERNAME", 175, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXYPASSWORD", 176, pycurl_handle_setopt_string },
	{ "CURLOPT_NOPROXY", 177, pycurl_handle_setopt_string },
	{ "CURLOPT_TFTP_BLKSIZE", 178, pycurl_handle_setopt_long },
	{ "CURLOPT_SOCKS5_GSSAPI_NEC", 180, pycurl_handle_setopt_long },
	{ "CURLOPT_PROTOCOLS", 181, pycurl_handle_setopt_long },
	{ "CURLOPT_REDIR_PROTOCOLS", 182, pycurl_handle_setopt_long },
	{ "CURLOPT_SSH_KNOWNHOSTS", 183, pycurl_handle_setopt_string },
	{ "CURLOPT_SSH_KEYFUNCTION", 184, NULL },
	{ "CURLOPT_SSH_KEYDATA", 185, NULL },
	{ "CURLOPT_MAIL_FROM", 186, pycurl_handle_setopt_string },
	{ "CURLOPT_MAIL_RCPT", 187, NULL },
	{ "CURLOPT_FTP_USE_PRET", 188, pycurl_handle_setopt_long },
	{ "CURLOPT_RTSP_REQUEST", 189, pycurl_handle_setopt_long },
	{ "CURLOPT_RTSP_SESSION_ID", 190, pycurl_handle_setopt_string },
	{ "CURLOPT_RTSP_STREAM_URI", 191, pycurl_handle_setopt_string },
	{ "CURLOPT_RTSP_TRANSPORT", 192, pycurl_handle_setopt_string },
	{ "CURLOPT_RTSP_CLIENT_CSEQ", 193, pycurl_handle_setopt_long },
	{ "CURLOPT_RTSP_SERVER_CSEQ", 194, pycurl_handle_setopt_long },
	{ "CURLOPT_INTERLEAVEDATA", 195, NULL },
	{ "CURLOPT_INTERLEAVEFUNCTION", 196, NULL },
	{ "CURLOPT_WILDCARDMATCH", 197, pycurl_handle_setopt_long },
	{ "CURLOPT_CHUNK_BGN_FUNCTION", 198, NULL },
	{ "CURLOPT_CHUNK_END_FUNCTION", 199, NULL },
	{ "CURLOPT_FNMATCH_FUNCTION", 200, NULL },
	{ "CURLOPT_CHUNK_DATA", 201, NULL },
	{ "CURLOPT_FNMATCH_DATA", 202, NULL },
	{ "CURLOPT_RESOLVE", 203, NULL },
	{ "CURLOPT_TLSAUTH_USERNAME", 204, pycurl_handle_setopt_string },
	{ "CURLOPT_TLSAUTH_PASSWORD", 205, pycurl_handle_setopt_string },
	{ "CURLOPT_TLSAUTH_TYPE", 206, pycurl_handle_setopt_string },
	{ "CURLOPT_TRANSFER_ENCODING", 207, pycurl_handle_setopt_long },
	{ "CURLOPT_CLOSESOCKETFUNCTION", 208, NULL },
	{ "CURLOPT_CLOSESOCKETDATA", 209, NULL },
	{ "CURLOPT_GSSAPI_DELEGATION", 210, pycurl_handle_setopt_long },
	{ "CURLOPT_DNS_SERVERS", 211, pycurl_handle_setopt_string },
	{ "CURLOPT_ACCEPTTIMEOUT_MS", 212, pycurl_handle_setopt_long },
	{ "CURLOPT_TCP_KEEPALIVE", 213, pycurl_handle_setopt_long },
	{ "CURLOPT_TCP_KEEPIDLE", 214, pycurl_handle_setopt_long },
	{ "CURLOPT_TCP_KEEPINTVL", 215, pycurl_handle_setopt_long },
	{ "CURLOPT_SSL_OPTIONS", 216, pycurl_handle_setopt_long },
	{ "CURLOPT_MAIL_AUTH", 217, pycurl_handle_setopt_string },
	{ "CURLOPT_SASL_IR", 218, pycurl_handle_setopt_long },
	{ "CURLOPT_XFERINFOFUNCTION", 219, NULL },
	{ "CURLOPT_XOAUTH2_BEARER", 220, pycurl_handle_setopt_string },
	{ "CURLOPT_DNS_INTERFACE", 221, pycurl_handle_setopt_string },
	{ "CURLOPT_DNS_LOCAL_IP4", 222, pycurl_handle_setopt_string },
	{ "CURLOPT_DNS_LOCAL_IP6", 223, pycurl_handle_setopt_string },
	{ "CURLOPT_LOGIN_OPTIONS", 224, pycurl_handle_setopt_string },
	{ "CURLOPT_SSL_ENABLE_NPN", 225, pycurl_handle_setopt_long },
	{ "CURLOPT_SSL_ENABLE_ALPN", 226, pycurl_handle_setopt_long },
	{ "CURLOPT_EXPECT_100_TIMEOUT_MS", 227, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXYHEADER", 228, NULL },
	{ "CURLOPT_HEADEROPT", 229, pycurl_handle_setopt_long },
	{ "CURLOPT_PINNEDPUBLICKEY", 230, pycurl_handle_setopt_string },
	{ "CURLOPT_UNIX_SOCKET_PATH", 231, pycurl_handle_setopt_string },
	{ "CURLOPT_SSL_VERIFYSTATUS", 232, pycurl_handle_setopt_long },
	{ "CURLOPT_SSL_FALSESTART", 233, pycurl_handle_setopt_long },
	{ "CURLOPT_PATH_AS_IS", 234, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXY_SERVICE_NAME", 235, pycurl_handle_setopt_string },
	{ "CURLOPT_SERVICE_NAME", 236, pycurl_handle_setopt_string },
	{ "CURLOPT_PIPEWAIT", 237, pycurl_handle_setopt_long },
	{ "CURLOPT_DEFAULT_PROTOCOL", 238, pycurl_handle_setopt_string },
	{ "CURLOPT_STREAM_WEIGHT", 239, pycurl_handle_setopt_long },
	{ "CURLOPT_STREAM_DEPENDS", 240, NULL },
	{ "CURLOPT_STREAM_DEPENDS_E", 241, NULL },
	{ "CURLOPT_TFTP_NO_OPTIONS", 242, pycurl_handle_setopt_long },
	{ "CURLOPT_CONNECT_TO", 243, NULL },
	{ "CURLOPT_TCP_FASTOPEN", 244, pycurl_handle_setopt_long },
	{ "CURLOPT_KEEP_SENDING_ON_ERROR", 245, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXY_CAINFO", 246, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_CAPATH", 247, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSL_VERIFYPEER", 248, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXY_SSL_VERIFYHOST", 249, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXY_SSLVERSION", 250, pycurl_handle_setopt_long },
	{ "CURLOPT_PROXY_TLSAUTH_USERNAME", 251, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_TLSAUTH_PASSWORD", 252, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_TLSAUTH_TYPE", 253, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSLCERT", 254, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSLCERTTYPE", 255, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSLKEY", 256, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSLKEYTYPE", 257, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_KEYPASSWD", 258, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSL_CIPHER_LIST", 259, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_CRLFILE", 260, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_SSL_OPTIONS", 261, pycurl_handle_setopt_long },
	{ "CURLOPT_PRE_PROXY", 262, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_PINNEDPUBLICKEY", 263, pycurl_handle_setopt_string },
	{ "CURLOPT_ABSTRACT_UNIX_SOCKET", 264, pycurl_handle_setopt_string },
	{ "CURLOPT_SUPPRESS_CONNECT_HEADERS", 265, pycurl_handle_setopt_long },
	{ "CURLOPT_REQUEST_TARGET", 266, pycurl_handle_setopt_string },
	{ "CURLOPT_SOCKS5_AUTH", 267, pycurl_handle_setopt_long },
	{ "CURLOPT_SSH_COMPRESSION", 268, pycurl_handle_setopt_long },
	{ "CURLOPT_MIMEPOST", 269, NULL },
	{ "CURLOPT_TIMEVALUE_LARGE", 270, NULL },
	{ "CURLOPT_HAPPY_EYEBALLS_TIMEOUT_MS", 271, pycurl_handle_setopt_long },
	{ "CURLOPT_RESOLVER_START_FUNCTION", 272, NULL },
	{ "CURLOPT_RESOLVER_START_DATA", 273, NULL },
	{ "CURLOPT_HAPROXYPROTOCOL", 274, pycurl_handle_setopt_long },
	{ "CURLOPT_DNS_SHUFFLE_ADDRESSES", 275, pycurl_handle_setopt_long },
	{ "CURLOPT_TLS13_CIPHERS", 276, pycurl_handle_setopt_string },
	{ "CURLOPT_PROXY_TLS13_CIPHERS", 277, pycurl_handle_setopt_string },
	{ "CURLOPT_DISALLOW_USERNAME_IN_URL", 278, pycurl_handle_setopt_long },
	{ "CURLOPT_DOH_URL", 279, pycurl_handle_setopt_string },
	{ "CURLOPT_UPLOAD_BUFFERSIZE", 280, pycurl_handle_setopt_long },
	{ "CURLOPT_UPKEEP_INTERVAL_MS", 281, pycurl_handle_setopt_long },
	{ "CURLOPT_CURLU", 282, NULL },
	{ "CURLOPT_TRAILERFUNCTION", 283, NULL },
	{ "CURLOPT_TRAILERDATA", 284, NULL },
	{ "CURLOPT_HTTP09_ALLOWED", 285, pycurl_handle_setopt_long },
	{ "CURLOPT_ALTSVC_CTRL", 286, pycurl_handle_setopt_long },
	{ "CURLOPT_ALTSVC", 287, pycurl_handle_setopt_string },
	{ NULL, 0, 0 }
};