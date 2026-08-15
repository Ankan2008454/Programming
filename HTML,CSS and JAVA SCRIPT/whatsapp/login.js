const users=['Ankan','Ankesha','Ankit'];
const usernameInput=document.querySelector('.user-input');
const message=document.querySelector('.text');
const loginButton=document.querySelector('.login');
loginButton.disabled = true;

// Enable Login only when something is typed
usernameInput.addEventListener('input', () => {
    loginButton.disabled = usernameInput.value.trim() === '';
});

loginButton.addEventListener('click', () => {
    const userName = usernameInput.value.trim();
    const user = users.find(
        user => user.toLowerCase() === userName.toLowerCase()
    );

    if (user) {
        setTimeout(() => {
            message.innerHTML = `Welcome, ${user}!`;
        }, 900);

        setTimeout(() => {
            message.innerHTML = '';
        }, 2000);

        setTimeout(() => {
            window.location.href = 'whatsapp.html';
        }, 800);
    } else {
        setTimeout(() => {
            message.innerHTML = 'User not found';
        }, 700);
        setTimeout(() => {
            message.innerHTML = '';
        }, 1700);
    }
});