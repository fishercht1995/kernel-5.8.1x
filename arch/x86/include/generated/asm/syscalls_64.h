__SYSCALL_COMMON(0, sys_read)
__SYSCALL_COMMON(1, sys_write)
__SYSCALL_COMMON(2, sys_open)
__SYSCALL_COMMON(3, sys_close)
__SYSCALL_COMMON(4, sys_newstat)
__SYSCALL_COMMON(5, sys_newfstat)
__SYSCALL_COMMON(6, sys_newlstat)
__SYSCALL_COMMON(7, sys_poll)
__SYSCALL_COMMON(8, sys_lseek)
__SYSCALL_COMMON(9, sys_mmap)
__SYSCALL_COMMON(10, sys_mprotect)
__SYSCALL_COMMON(11, sys_munmap)
__SYSCALL_COMMON(12, sys_brk)
__SYSCALL_64(13, sys_rt_sigaction)
__SYSCALL_COMMON(14, sys_rt_sigprocmask)
__SYSCALL_64(15, sys_rt_sigreturn)
__SYSCALL_64(16, sys_ioctl)
__SYSCALL_COMMON(17, sys_pread64)
__SYSCALL_COMMON(18, sys_pwrite64)
__SYSCALL_64(19, sys_readv)
__SYSCALL_64(20, sys_writev)
__SYSCALL_COMMON(21, sys_access)
__SYSCALL_COMMON(22, sys_pipe)
__SYSCALL_COMMON(23, sys_select)
__SYSCALL_COMMON(24, sys_sched_yield)
__SYSCALL_COMMON(25, sys_mremap)
__SYSCALL_COMMON(26, sys_msync)
__SYSCALL_COMMON(27, sys_mincore)
__SYSCALL_COMMON(28, sys_madvise)
__SYSCALL_COMMON(29, sys_shmget)
__SYSCALL_COMMON(30, sys_shmat)
__SYSCALL_COMMON(31, sys_shmctl)
__SYSCALL_COMMON(32, sys_dup)
__SYSCALL_COMMON(33, sys_dup2)
__SYSCALL_COMMON(34, sys_pause)
__SYSCALL_COMMON(35, sys_nanosleep)
__SYSCALL_COMMON(36, sys_getitimer)
__SYSCALL_COMMON(37, sys_alarm)
__SYSCALL_COMMON(38, sys_setitimer)
__SYSCALL_COMMON(39, sys_getpid)
__SYSCALL_COMMON(40, sys_sendfile64)
__SYSCALL_COMMON(41, sys_socket)
__SYSCALL_COMMON(42, sys_connect)
__SYSCALL_COMMON(43, sys_accept)
__SYSCALL_COMMON(44, sys_sendto)
__SYSCALL_64(45, sys_recvfrom)
__SYSCALL_64(46, sys_sendmsg)
__SYSCALL_64(47, sys_recvmsg)
__SYSCALL_COMMON(48, sys_shutdown)
__SYSCALL_COMMON(49, sys_bind)
__SYSCALL_COMMON(50, sys_listen)
__SYSCALL_COMMON(51, sys_getsockname)
__SYSCALL_COMMON(52, sys_getpeername)
__SYSCALL_COMMON(53, sys_socketpair)
__SYSCALL_64(54, sys_setsockopt)
__SYSCALL_64(55, sys_getsockopt)
__SYSCALL_COMMON(56, sys_clone)
__SYSCALL_COMMON(57, sys_fork)
__SYSCALL_COMMON(58, sys_vfork)
__SYSCALL_64(59, sys_execve)
__SYSCALL_COMMON(60, sys_exit)
__SYSCALL_COMMON(61, sys_wait4)
__SYSCALL_COMMON(62, sys_kill)
__SYSCALL_COMMON(63, sys_newuname)
__SYSCALL_COMMON(64, sys_semget)
__SYSCALL_COMMON(65, sys_semop)
__SYSCALL_COMMON(66, sys_semctl)
__SYSCALL_COMMON(67, sys_shmdt)
__SYSCALL_COMMON(68, sys_msgget)
__SYSCALL_COMMON(69, sys_msgsnd)
__SYSCALL_COMMON(70, sys_msgrcv)
__SYSCALL_COMMON(71, sys_msgctl)
__SYSCALL_COMMON(72, sys_fcntl)
__SYSCALL_COMMON(73, sys_flock)
__SYSCALL_COMMON(74, sys_fsync)
__SYSCALL_COMMON(75, sys_fdatasync)
__SYSCALL_COMMON(76, sys_truncate)
__SYSCALL_COMMON(77, sys_ftruncate)
__SYSCALL_COMMON(78, sys_getdents)
__SYSCALL_COMMON(79, sys_getcwd)
__SYSCALL_COMMON(80, sys_chdir)
__SYSCALL_COMMON(81, sys_fchdir)
__SYSCALL_COMMON(82, sys_rename)
__SYSCALL_COMMON(83, sys_mkdir)
__SYSCALL_COMMON(84, sys_rmdir)
__SYSCALL_COMMON(85, sys_creat)
__SYSCALL_COMMON(86, sys_link)
__SYSCALL_COMMON(87, sys_unlink)
__SYSCALL_COMMON(88, sys_symlink)
__SYSCALL_COMMON(89, sys_readlink)
__SYSCALL_COMMON(90, sys_chmod)
__SYSCALL_COMMON(91, sys_fchmod)
__SYSCALL_COMMON(92, sys_chown)
__SYSCALL_COMMON(93, sys_fchown)
__SYSCALL_COMMON(94, sys_lchown)
__SYSCALL_COMMON(95, sys_umask)
__SYSCALL_COMMON(96, sys_gettimeofday)
__SYSCALL_COMMON(97, sys_getrlimit)
__SYSCALL_COMMON(98, sys_getrusage)
__SYSCALL_COMMON(99, sys_sysinfo)
__SYSCALL_COMMON(100, sys_times)
__SYSCALL_64(101, sys_ptrace)
__SYSCALL_COMMON(102, sys_getuid)
__SYSCALL_COMMON(103, sys_syslog)
__SYSCALL_COMMON(104, sys_getgid)
__SYSCALL_COMMON(105, sys_setuid)
__SYSCALL_COMMON(106, sys_setgid)
__SYSCALL_COMMON(107, sys_geteuid)
__SYSCALL_COMMON(108, sys_getegid)
__SYSCALL_COMMON(109, sys_setpgid)
__SYSCALL_COMMON(110, sys_getppid)
__SYSCALL_COMMON(111, sys_getpgrp)
__SYSCALL_COMMON(112, sys_setsid)
__SYSCALL_COMMON(113, sys_setreuid)
__SYSCALL_COMMON(114, sys_setregid)
__SYSCALL_COMMON(115, sys_getgroups)
__SYSCALL_COMMON(116, sys_setgroups)
__SYSCALL_COMMON(117, sys_setresuid)
__SYSCALL_COMMON(118, sys_getresuid)
__SYSCALL_COMMON(119, sys_setresgid)
__SYSCALL_COMMON(120, sys_getresgid)
__SYSCALL_COMMON(121, sys_getpgid)
__SYSCALL_COMMON(122, sys_setfsuid)
__SYSCALL_COMMON(123, sys_setfsgid)
__SYSCALL_COMMON(124, sys_getsid)
__SYSCALL_COMMON(125, sys_capget)
__SYSCALL_COMMON(126, sys_capset)
__SYSCALL_64(127, sys_rt_sigpending)
__SYSCALL_64(128, sys_rt_sigtimedwait)
__SYSCALL_64(129, sys_rt_sigqueueinfo)
__SYSCALL_COMMON(130, sys_rt_sigsuspend)
__SYSCALL_64(131, sys_sigaltstack)
__SYSCALL_COMMON(132, sys_utime)
__SYSCALL_COMMON(133, sys_mknod)
__SYSCALL_COMMON(135, sys_personality)
__SYSCALL_COMMON(136, sys_ustat)
__SYSCALL_COMMON(137, sys_statfs)
__SYSCALL_COMMON(138, sys_fstatfs)
__SYSCALL_COMMON(139, sys_sysfs)
__SYSCALL_COMMON(140, sys_getpriority)
__SYSCALL_COMMON(141, sys_setpriority)
__SYSCALL_COMMON(142, sys_sched_setparam)
__SYSCALL_COMMON(143, sys_sched_getparam)
__SYSCALL_COMMON(144, sys_sched_setscheduler)
__SYSCALL_COMMON(145, sys_sched_getscheduler)
__SYSCALL_COMMON(146, sys_sched_get_priority_max)
__SYSCALL_COMMON(147, sys_sched_get_priority_min)
__SYSCALL_COMMON(148, sys_sched_rr_get_interval)
__SYSCALL_COMMON(149, sys_mlock)
__SYSCALL_COMMON(150, sys_munlock)
__SYSCALL_COMMON(151, sys_mlockall)
__SYSCALL_COMMON(152, sys_munlockall)
__SYSCALL_COMMON(153, sys_vhangup)
__SYSCALL_COMMON(154, sys_modify_ldt)
__SYSCALL_COMMON(155, sys_pivot_root)
__SYSCALL_64(156, sys_sysctl)
__SYSCALL_COMMON(157, sys_prctl)
__SYSCALL_COMMON(158, sys_arch_prctl)
__SYSCALL_COMMON(159, sys_adjtimex)
__SYSCALL_COMMON(160, sys_setrlimit)
__SYSCALL_COMMON(161, sys_chroot)
__SYSCALL_COMMON(162, sys_sync)
__SYSCALL_COMMON(163, sys_acct)
__SYSCALL_COMMON(164, sys_settimeofday)
__SYSCALL_COMMON(165, sys_mount)
__SYSCALL_COMMON(166, sys_umount)
__SYSCALL_COMMON(167, sys_swapon)
__SYSCALL_COMMON(168, sys_swapoff)
__SYSCALL_COMMON(169, sys_reboot)
__SYSCALL_COMMON(170, sys_sethostname)
__SYSCALL_COMMON(171, sys_setdomainname)
__SYSCALL_COMMON(172, sys_iopl)
__SYSCALL_COMMON(173, sys_ioperm)
__SYSCALL_COMMON(175, sys_init_module)
__SYSCALL_COMMON(176, sys_delete_module)
__SYSCALL_COMMON(179, sys_quotactl)
__SYSCALL_COMMON(186, sys_gettid)
__SYSCALL_COMMON(187, sys_readahead)
__SYSCALL_COMMON(188, sys_setxattr)
__SYSCALL_COMMON(189, sys_lsetxattr)
__SYSCALL_COMMON(190, sys_fsetxattr)
__SYSCALL_COMMON(191, sys_getxattr)
__SYSCALL_COMMON(192, sys_lgetxattr)
__SYSCALL_COMMON(193, sys_fgetxattr)
__SYSCALL_COMMON(194, sys_listxattr)
__SYSCALL_COMMON(195, sys_llistxattr)
__SYSCALL_COMMON(196, sys_flistxattr)
__SYSCALL_COMMON(197, sys_removexattr)
__SYSCALL_COMMON(198, sys_lremovexattr)
__SYSCALL_COMMON(199, sys_fremovexattr)
__SYSCALL_COMMON(200, sys_tkill)
__SYSCALL_COMMON(201, sys_time)
__SYSCALL_COMMON(202, sys_futex)
__SYSCALL_COMMON(203, sys_sched_setaffinity)
__SYSCALL_COMMON(204, sys_sched_getaffinity)
__SYSCALL_64(206, sys_io_setup)
__SYSCALL_COMMON(207, sys_io_destroy)
__SYSCALL_COMMON(208, sys_io_getevents)
__SYSCALL_64(209, sys_io_submit)
__SYSCALL_COMMON(210, sys_io_cancel)
__SYSCALL_COMMON(212, sys_lookup_dcookie)
__SYSCALL_COMMON(213, sys_epoll_create)
__SYSCALL_COMMON(216, sys_remap_file_pages)
__SYSCALL_COMMON(217, sys_getdents64)
__SYSCALL_COMMON(218, sys_set_tid_address)
__SYSCALL_COMMON(219, sys_restart_syscall)
__SYSCALL_COMMON(220, sys_semtimedop)
__SYSCALL_COMMON(221, sys_fadvise64)
__SYSCALL_64(222, sys_timer_create)
__SYSCALL_COMMON(223, sys_timer_settime)
__SYSCALL_COMMON(224, sys_timer_gettime)
__SYSCALL_COMMON(225, sys_timer_getoverrun)
__SYSCALL_COMMON(226, sys_timer_delete)
__SYSCALL_COMMON(227, sys_clock_settime)
__SYSCALL_COMMON(228, sys_clock_gettime)
__SYSCALL_COMMON(229, sys_clock_getres)
__SYSCALL_COMMON(230, sys_clock_nanosleep)
__SYSCALL_COMMON(231, sys_exit_group)
__SYSCALL_COMMON(232, sys_epoll_wait)
__SYSCALL_COMMON(233, sys_epoll_ctl)
__SYSCALL_COMMON(234, sys_tgkill)
__SYSCALL_COMMON(235, sys_utimes)
__SYSCALL_COMMON(237, sys_mbind)
__SYSCALL_COMMON(238, sys_set_mempolicy)
__SYSCALL_COMMON(239, sys_get_mempolicy)
__SYSCALL_COMMON(240, sys_mq_open)
__SYSCALL_COMMON(241, sys_mq_unlink)
__SYSCALL_COMMON(242, sys_mq_timedsend)
__SYSCALL_COMMON(243, sys_mq_timedreceive)
__SYSCALL_64(244, sys_mq_notify)
__SYSCALL_COMMON(245, sys_mq_getsetattr)
__SYSCALL_64(246, sys_kexec_load)
__SYSCALL_64(247, sys_waitid)
__SYSCALL_COMMON(248, sys_add_key)
__SYSCALL_COMMON(249, sys_request_key)
__SYSCALL_COMMON(250, sys_keyctl)
__SYSCALL_COMMON(251, sys_ioprio_set)
__SYSCALL_COMMON(252, sys_ioprio_get)
__SYSCALL_COMMON(253, sys_inotify_init)
__SYSCALL_COMMON(254, sys_inotify_add_watch)
__SYSCALL_COMMON(255, sys_inotify_rm_watch)
__SYSCALL_COMMON(256, sys_migrate_pages)
__SYSCALL_COMMON(257, sys_openat)
__SYSCALL_COMMON(258, sys_mkdirat)
__SYSCALL_COMMON(259, sys_mknodat)
__SYSCALL_COMMON(260, sys_fchownat)
__SYSCALL_COMMON(261, sys_futimesat)
__SYSCALL_COMMON(262, sys_newfstatat)
__SYSCALL_COMMON(263, sys_unlinkat)
__SYSCALL_COMMON(264, sys_renameat)
__SYSCALL_COMMON(265, sys_linkat)
__SYSCALL_COMMON(266, sys_symlinkat)
__SYSCALL_COMMON(267, sys_readlinkat)
__SYSCALL_COMMON(268, sys_fchmodat)
__SYSCALL_COMMON(269, sys_faccessat)
__SYSCALL_COMMON(270, sys_pselect6)
__SYSCALL_COMMON(271, sys_ppoll)
__SYSCALL_COMMON(272, sys_unshare)
__SYSCALL_64(273, sys_set_robust_list)
__SYSCALL_64(274, sys_get_robust_list)
__SYSCALL_COMMON(275, sys_splice)
__SYSCALL_COMMON(276, sys_tee)
__SYSCALL_COMMON(277, sys_sync_file_range)
__SYSCALL_64(278, sys_vmsplice)
__SYSCALL_64(279, sys_move_pages)
__SYSCALL_COMMON(280, sys_utimensat)
__SYSCALL_COMMON(281, sys_epoll_pwait)
__SYSCALL_COMMON(282, sys_signalfd)
__SYSCALL_COMMON(283, sys_timerfd_create)
__SYSCALL_COMMON(284, sys_eventfd)
__SYSCALL_COMMON(285, sys_fallocate)
__SYSCALL_COMMON(286, sys_timerfd_settime)
__SYSCALL_COMMON(287, sys_timerfd_gettime)
__SYSCALL_COMMON(288, sys_accept4)
__SYSCALL_COMMON(289, sys_signalfd4)
__SYSCALL_COMMON(290, sys_eventfd2)
__SYSCALL_COMMON(291, sys_epoll_create1)
__SYSCALL_COMMON(292, sys_dup3)
__SYSCALL_COMMON(293, sys_pipe2)
__SYSCALL_COMMON(294, sys_inotify_init1)
__SYSCALL_64(295, sys_preadv)
__SYSCALL_64(296, sys_pwritev)
__SYSCALL_64(297, sys_rt_tgsigqueueinfo)
__SYSCALL_COMMON(298, sys_perf_event_open)
__SYSCALL_64(299, sys_recvmmsg)
__SYSCALL_COMMON(300, sys_fanotify_init)
__SYSCALL_COMMON(301, sys_fanotify_mark)
__SYSCALL_COMMON(302, sys_prlimit64)
__SYSCALL_COMMON(303, sys_name_to_handle_at)
__SYSCALL_COMMON(304, sys_open_by_handle_at)
__SYSCALL_COMMON(305, sys_clock_adjtime)
__SYSCALL_COMMON(306, sys_syncfs)
__SYSCALL_64(307, sys_sendmmsg)
__SYSCALL_COMMON(308, sys_setns)
__SYSCALL_COMMON(309, sys_getcpu)
__SYSCALL_64(310, sys_process_vm_readv)
__SYSCALL_64(311, sys_process_vm_writev)
__SYSCALL_COMMON(312, sys_kcmp)
__SYSCALL_COMMON(313, sys_finit_module)
__SYSCALL_COMMON(314, sys_sched_setattr)
__SYSCALL_COMMON(315, sys_sched_getattr)
__SYSCALL_COMMON(316, sys_renameat2)
__SYSCALL_COMMON(317, sys_seccomp)
__SYSCALL_COMMON(318, sys_getrandom)
__SYSCALL_COMMON(319, sys_memfd_create)
__SYSCALL_COMMON(320, sys_kexec_file_load)
__SYSCALL_COMMON(321, sys_bpf)
__SYSCALL_64(322, sys_execveat)
__SYSCALL_COMMON(323, sys_userfaultfd)
__SYSCALL_COMMON(324, sys_membarrier)
__SYSCALL_COMMON(325, sys_mlock2)
__SYSCALL_COMMON(326, sys_copy_file_range)
__SYSCALL_64(327, sys_preadv2)
__SYSCALL_64(328, sys_pwritev2)
__SYSCALL_COMMON(329, sys_pkey_mprotect)
__SYSCALL_COMMON(330, sys_pkey_alloc)
__SYSCALL_COMMON(331, sys_pkey_free)
__SYSCALL_COMMON(332, sys_statx)
__SYSCALL_COMMON(333, sys_io_pgetevents)
__SYSCALL_COMMON(334, sys_rseq)
__SYSCALL_COMMON(424, sys_pidfd_send_signal)
__SYSCALL_COMMON(425, sys_io_uring_setup)
__SYSCALL_COMMON(426, sys_io_uring_enter)
__SYSCALL_COMMON(427, sys_io_uring_register)
__SYSCALL_COMMON(428, sys_open_tree)
__SYSCALL_COMMON(429, sys_move_mount)
__SYSCALL_COMMON(430, sys_fsopen)
__SYSCALL_COMMON(431, sys_fsconfig)
__SYSCALL_COMMON(432, sys_fsmount)
__SYSCALL_COMMON(433, sys_fspick)
__SYSCALL_COMMON(434, sys_pidfd_open)
__SYSCALL_COMMON(435, sys_clone3)
__SYSCALL_COMMON(437, sys_openat2)
__SYSCALL_COMMON(438, sys_pidfd_getfd)
__SYSCALL_COMMON(439, sys_faccessat2)
__SYSCALL_COMMON(440, sys_newexecve)
__SYSCALL_X32(512, compat_sys_rt_sigaction)
__SYSCALL_X32(513, compat_sys_x32_rt_sigreturn)
__SYSCALL_X32(514, compat_sys_ioctl)
__SYSCALL_X32(515, compat_sys_readv)
__SYSCALL_X32(516, compat_sys_writev)
__SYSCALL_X32(517, compat_sys_recvfrom)
__SYSCALL_X32(518, compat_sys_sendmsg)
__SYSCALL_X32(519, compat_sys_recvmsg)
__SYSCALL_X32(520, compat_sys_execve)
__SYSCALL_X32(521, compat_sys_ptrace)
__SYSCALL_X32(522, compat_sys_rt_sigpending)
__SYSCALL_X32(523, compat_sys_rt_sigtimedwait_time64)
__SYSCALL_X32(524, compat_sys_rt_sigqueueinfo)
__SYSCALL_X32(525, compat_sys_sigaltstack)
__SYSCALL_X32(526, compat_sys_timer_create)
__SYSCALL_X32(527, compat_sys_mq_notify)
__SYSCALL_X32(528, compat_sys_kexec_load)
__SYSCALL_X32(529, compat_sys_waitid)
__SYSCALL_X32(530, compat_sys_set_robust_list)
__SYSCALL_X32(531, compat_sys_get_robust_list)
__SYSCALL_X32(532, compat_sys_vmsplice)
__SYSCALL_X32(533, compat_sys_move_pages)
__SYSCALL_X32(534, compat_sys_preadv64)
__SYSCALL_X32(535, compat_sys_pwritev64)
__SYSCALL_X32(536, compat_sys_rt_tgsigqueueinfo)
__SYSCALL_X32(537, compat_sys_recvmmsg_time64)
__SYSCALL_X32(538, compat_sys_sendmmsg)
__SYSCALL_X32(539, compat_sys_process_vm_readv)
__SYSCALL_X32(540, compat_sys_process_vm_writev)
__SYSCALL_X32(541, compat_sys_setsockopt)
__SYSCALL_X32(542, compat_sys_getsockopt)
__SYSCALL_X32(543, compat_sys_io_setup)
__SYSCALL_X32(544, compat_sys_io_submit)
__SYSCALL_X32(545, compat_sys_execveat)
__SYSCALL_X32(546, compat_sys_preadv64v2)
__SYSCALL_X32(547, compat_sys_pwritev64v2)