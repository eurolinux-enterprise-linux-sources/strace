/* Generated by ioctls_gen.sh from definitions found in $linux/arch/sparc/include/ tree. */
{ "asm/apc.h", "APCIOCGBPORT", _IOC_READ, 0x4104, 0x04 },
{ "asm/apc.h", "APCIOCGCPWR", _IOC_READ, 0x4102, 0x04 },
{ "asm/apc.h", "APCIOCGFANCTL", _IOC_READ, 0x4100, 0x04 },
{ "asm/apc.h", "APCIOCSBPORT", _IOC_WRITE, 0x4105, 0x04 },
{ "asm/apc.h", "APCIOCSCPWR", _IOC_WRITE, 0x4103, 0x04 },
{ "asm/apc.h", "APCIOCSFANCTL", _IOC_WRITE, 0x4101, 0x04 },
{ "asm/display7seg.h", "D7SIOCRD", _IOC_READ, 0x7045, 0x04 },
{ "asm/display7seg.h", "D7SIOCTM", _IOC_NONE, 0x7047, 0x00 },
{ "asm/display7seg.h", "D7SIOCWR", _IOC_WRITE, 0x7046, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_CPU_TEMPERATURE", _IOC_READ, 0x7040, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_CPU_VOLTAGE", _IOC_READ, 0x7041, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_ETHERNET_TEMPERATURE", _IOC_READ, 0x7047, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_FAN_STATUS", _IOC_READ, 0x7042, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_GLOBALADDRESS", _IOC_READ, 0x7049, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_MTHRBD_TEMPERATURE", _IOC_READ, 0x7048, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_SCSI_TEMPERATURE", _IOC_READ, 0x7046, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_SHUTDOWN_TEMPERATURE", _IOC_READ, 0x7044, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_VOLTAGE_STATUS", _IOC_READ, 0x7045, 0x04 },
{ "asm/envctrl.h", "ENVCTRL_RD_WARNING_TEMPERATURE", _IOC_READ, 0x7043, 0x04 },
{ "asm/fbio.h", "FBIOGATTR", _IOC_READ, 0x4606, 0x58 },
{ "asm/fbio.h", "FBIOGCURMAX", _IOC_READ, 0x461c, 0x04 },
{ "asm/fbio.h", "FBIOGCURPOS", _IOC_WRITE, 0x461b, 0x04 },
{ "asm/fbio.h", "FBIOGCURSOR", _IOC_READ|_IOC_WRITE, 0x4619, 0x48 },
{ "asm/fbio.h", "FBIOGETCMAP", _IOC_WRITE, 0x4604, 0x20 },
{ "asm/fbio.h", "FBIOGTYPE", _IOC_READ, 0x4600, 0x18 },
{ "asm/fbio.h", "FBIOGVIDEO", _IOC_READ, 0x4608, 0x04 },
{ "asm/fbio.h", "FBIOPUTCMAP", _IOC_WRITE, 0x4603, 0x20 },
{ "asm/fbio.h", "FBIOSATTR", _IOC_WRITE, 0x4605, 0x58 },
{ "asm/fbio.h", "FBIOSCURPOS", _IOC_WRITE, 0x461a, 0x04 },
{ "asm/fbio.h", "FBIOSCURSOR", _IOC_WRITE, 0x4618, 0x48 },
{ "asm/fbio.h", "FBIOSVIDEO", _IOC_WRITE, 0x4607, 0x04 },
{ "asm/fbio.h", "FBIO_WID_ALLOC", _IOC_READ|_IOC_WRITE, 0x461e, 0x0c },
{ "asm/fbio.h", "FBIO_WID_FREE", _IOC_WRITE, 0x461f, 0x0c },
{ "asm/fbio.h", "FBIO_WID_GET", _IOC_READ|_IOC_WRITE, 0x4621, 0x10 },
{ "asm/fbio.h", "FBIO_WID_PUT", _IOC_WRITE, 0x4620, 0x10 },
{ "asm/fbio.h", "LEO_CLUTALLOC", _IOC_READ|_IOC_WRITE, 0x4c35, 0x0c },
{ "asm/fbio.h", "LEO_CLUTFREE", _IOC_WRITE, 0x4c36, 0x0c },
{ "asm/fbio.h", "LEO_CLUTPOST", _IOC_WRITE, 0x4c38, 0x28 },
{ "asm/fbio.h", "LEO_CLUTREAD", _IOC_WRITE, 0x4c37, 0x28 },
{ "asm/fbio.h", "LEO_GETGAMMA", _IOC_READ, 0x4c45, 0x04 },
{ "asm/fbio.h", "LEO_SETGAMMA", _IOC_WRITE, 0x4c44, 0x04 },
{ "asm/ioctls.h", "FIOASYNC", _IOC_WRITE, 0x667d, 0x04 },
{ "asm/ioctls.h", "FIOCLEX", _IOC_NONE, 0x6601, 0x00 },
{ "asm/ioctls.h", "FIONBIO", _IOC_WRITE, 0x667e, 0x04 },
{ "asm/ioctls.h", "FIONCLEX", _IOC_NONE, 0x6602, 0x00 },
{ "asm/ioctls.h", "FIONREAD", _IOC_READ, 0x667f, 0x04 },
{ "asm/ioctls.h", "FIOQSIZE", _IOC_READ, 0x6680, 0x08 },
{ "asm/ioctls.h", "TCFLSH", _IOC_NONE, 0x5407, 0x00 },
{ "asm/ioctls.h", "TCGETA", _IOC_READ, 0x5401, 0x12 },
{ "asm/ioctls.h", "TCGETS", _IOC_READ, 0x5408, 0x38 },
{ "asm/ioctls.h", "TCGETS2", _IOC_READ, 0x540c, 0x40 },
{ "asm/ioctls.h", "TCSBRK", _IOC_NONE, 0x5405, 0x00 },
{ "asm/ioctls.h", "TCSBRKP", 0, 0x5425, 0 },
{ "asm/ioctls.h", "TCSETA", _IOC_WRITE, 0x5402, 0x12 },
{ "asm/ioctls.h", "TCSETAF", _IOC_WRITE, 0x5404, 0x12 },
{ "asm/ioctls.h", "TCSETAW", _IOC_WRITE, 0x5403, 0x12 },
{ "asm/ioctls.h", "TCSETS", _IOC_WRITE, 0x5409, 0x38 },
{ "asm/ioctls.h", "TCSETS2", _IOC_WRITE, 0x540d, 0x40 },
{ "asm/ioctls.h", "TCSETSF", _IOC_WRITE, 0x540b, 0x38 },
{ "asm/ioctls.h", "TCSETSF2", _IOC_WRITE, 0x540f, 0x40 },
{ "asm/ioctls.h", "TCSETSW", _IOC_WRITE, 0x540a, 0x38 },
{ "asm/ioctls.h", "TCSETSW2", _IOC_WRITE, 0x540e, 0x40 },
{ "asm/ioctls.h", "TCXONC", _IOC_NONE, 0x5406, 0x00 },
{ "asm/ioctls.h", "TIOCCBRK", _IOC_NONE, 0x747a, 0x00 },
{ "asm/ioctls.h", "TIOCCONS", _IOC_NONE, 0x7424, 0x00 },
{ "asm/ioctls.h", "TIOCEXCL", _IOC_NONE, 0x740d, 0x00 },
{ "asm/ioctls.h", "TIOCGDEV", _IOC_READ, 0x5432, 0x04 },
{ "asm/ioctls.h", "TIOCGETD", _IOC_READ, 0x7400, 0x04 },
{ "asm/ioctls.h", "TIOCGEXCL", _IOC_READ, 0x5440, 0x04 },
{ "asm/ioctls.h", "TIOCGICOUNT", 0, 0x545D, 0 },
{ "asm/ioctls.h", "TIOCGLCKTRMIOS", 0, 0x5456, 0 },
{ "asm/ioctls.h", "TIOCGPGRP", _IOC_READ, 0x7483, 0x04 },
{ "asm/ioctls.h", "TIOCGPKT", _IOC_READ, 0x5438, 0x04 },
{ "asm/ioctls.h", "TIOCGPTLCK", _IOC_READ, 0x5439, 0x04 },
{ "asm/ioctls.h", "TIOCGPTN", _IOC_READ, 0x7486, 0x04 },
{ "asm/ioctls.h", "TIOCGRS485", _IOC_READ, 0x5441, 0x20 },
{ "asm/ioctls.h", "TIOCGSERIAL", 0, 0x541E, 0 },
{ "asm/ioctls.h", "TIOCGSID", _IOC_READ, 0x7485, 0x04 },
{ "asm/ioctls.h", "TIOCGSOFTCAR", _IOC_READ, 0x7464, 0x04 },
{ "asm/ioctls.h", "TIOCGWINSZ", _IOC_READ, 0x7468, 0x08 },
{ "asm/ioctls.h", "TIOCLINUX", 0, 0x541C, 0 },
{ "asm/ioctls.h", "TIOCMBIC", _IOC_WRITE, 0x746b, 0x04 },
{ "asm/ioctls.h", "TIOCMBIS", _IOC_WRITE, 0x746c, 0x04 },
{ "asm/ioctls.h", "TIOCMGET", _IOC_READ, 0x746a, 0x04 },
{ "asm/ioctls.h", "TIOCMIWAIT", 0, 0x545C, 0 },
{ "asm/ioctls.h", "TIOCMSET", _IOC_WRITE, 0x746d, 0x04 },
{ "asm/ioctls.h", "TIOCNOTTY", _IOC_NONE, 0x7471, 0x00 },
{ "asm/ioctls.h", "TIOCNXCL", _IOC_NONE, 0x740e, 0x00 },
{ "asm/ioctls.h", "TIOCOUTQ", _IOC_READ, 0x7473, 0x04 },
{ "asm/ioctls.h", "TIOCPKT", _IOC_WRITE, 0x7470, 0x04 },
{ "asm/ioctls.h", "TIOCSBRK", _IOC_NONE, 0x747b, 0x00 },
{ "asm/ioctls.h", "TIOCSCTTY", _IOC_NONE, 0x7484, 0x00 },
{ "asm/ioctls.h", "TIOCSERCONFIG", 0, 0x5453, 0 },
{ "asm/ioctls.h", "TIOCSERGETLSR", 0, 0x5459, 0 },
{ "asm/ioctls.h", "TIOCSERGETMULTI", 0, 0x545A, 0 },
{ "asm/ioctls.h", "TIOCSERGSTRUCT", 0, 0x5458, 0 },
{ "asm/ioctls.h", "TIOCSERGWILD", 0, 0x5454, 0 },
{ "asm/ioctls.h", "TIOCSERSETMULTI", 0, 0x545B, 0 },
{ "asm/ioctls.h", "TIOCSERSWILD", 0, 0x5455, 0 },
{ "asm/ioctls.h", "TIOCSETD", _IOC_WRITE, 0x7401, 0x04 },
{ "asm/ioctls.h", "TIOCSIG", _IOC_WRITE, 0x7488, 0x04 },
{ "asm/ioctls.h", "TIOCSLCKTRMIOS", 0, 0x5457, 0 },
{ "asm/ioctls.h", "TIOCSPGRP", _IOC_WRITE, 0x7482, 0x04 },
{ "asm/ioctls.h", "TIOCSPTLCK", _IOC_WRITE, 0x7487, 0x04 },
{ "asm/ioctls.h", "TIOCSRS485", _IOC_READ|_IOC_WRITE, 0x5442, 0x20 },
{ "asm/ioctls.h", "TIOCSSERIAL", 0, 0x541F, 0 },
{ "asm/ioctls.h", "TIOCSSOFTCAR", _IOC_WRITE, 0x7465, 0x04 },
{ "asm/ioctls.h", "TIOCSTART", _IOC_NONE, 0x746e, 0x00 },
{ "asm/ioctls.h", "TIOCSTI", _IOC_WRITE, 0x7472, 0x01 },
{ "asm/ioctls.h", "TIOCSTOP", _IOC_NONE, 0x746f, 0x00 },
{ "asm/ioctls.h", "TIOCSWINSZ", _IOC_WRITE, 0x7467, 0x08 },
{ "asm/ioctls.h", "TIOCVHANGUP", _IOC_NONE, 0x5437, 0x00 },
{ "asm/openpromio.h", "OPIOCGET", _IOC_READ|_IOC_WRITE, 0x4f01, 0x20 },
{ "asm/openpromio.h", "OPIOCGETCHILD", _IOC_READ|_IOC_WRITE, 0x4f06, 0x04 },
{ "asm/openpromio.h", "OPIOCGETNEXT", _IOC_READ|_IOC_WRITE, 0x4f05, 0x04 },
{ "asm/openpromio.h", "OPIOCGETOPTNODE", _IOC_READ, 0x4f04, 0x04 },
{ "asm/openpromio.h", "OPIOCNEXTPROP", _IOC_READ|_IOC_WRITE, 0x4f03, 0x20 },
{ "asm/openpromio.h", "OPIOCSET", _IOC_WRITE, 0x4f02, 0x20 },
{ "asm/sockios.h", "FIOGETOWN", 0, 0x8903, 0 },
{ "asm/sockios.h", "FIOSETOWN", 0, 0x8901, 0 },
{ "asm/sockios.h", "SIOCATMARK", 0, 0x8905, 0 },
{ "asm/sockios.h", "SIOCGPGRP", 0, 0x8904, 0 },
{ "asm/sockios.h", "SIOCGSTAMP", 0, 0x8906, 0 },
{ "asm/sockios.h", "SIOCGSTAMPNS", 0, 0x8907, 0 },
{ "asm/sockios.h", "SIOCSPGRP", 0, 0x8902, 0 },
{ "asm/watchdog.h", "WIOCGSTAT", _IOC_READ, 0x570c, 0x04 },
{ "asm/watchdog.h", "WIOCSTART", _IOC_NONE, 0x570a, 0x00 },
{ "asm/watchdog.h", "WIOCSTOP", _IOC_NONE, 0x570b, 0x00 },
